#include<bits/stdc++.h>
using namespace std;
int n,k;
int arr[105][105];
int res[5];
char w[5][1005];
pair<int,int> p[5];
map<char,pair<int,int>> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    mp['N']={-1,0};
    mp['E']={0,1};
    mp['S']={1,0};
    mp['W']={0,-1};
    arr[1][1]=4,res[4]=1,p[4]={1,1};
    arr[1][n]=1,res[1]=1,p[1]={1,n};
    arr[n][n]=2,res[2]=1,p[2]={n,n};
    arr[n][1]=3,res[3]=1,p[3]={n,1};
    for(int i=1;i<=4;++i){
        for(int j=1;j<=k;++j){
            cin>>w[i][j];
        }
    }
    for(int i=1;i<=k;++i){
        for(int j=1;j<=4;++j){
            auto [di,dj]=mp[w[j][i]];
            int ni=p[j].first+di;
            int nj=p[j].second+dj;
            if(ni<=0 or ni>n or nj<=0 or nj>n)continue;
            if(p[arr[ni][nj]].first==ni and p[arr[ni][nj]].second==nj)continue;
            if(arr[ni][nj]!=0)--res[arr[ni][nj]];
            arr[ni][nj]=j;
            ++res[j];
            p[j]={ni,nj};
        }
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(arr[i][j]==0){
                cout<<"No";
                return 0;
            }
        }
    }
    int mx=0;
    for(int i=1;i<=4;++i){
        mx=max(res[i],mx);
    }
    vector<int> v;
    for(int i=1;i<=4;++i){
        if(res[i]==mx)v.push_back(i);
    }
    cout<<v.size()<<" "<<mx<<"\n";
    for(auto i:v){
        cout<<i<<"\n";
    }
    return 0;
}