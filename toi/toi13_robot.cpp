#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
int n,m;
char arr[2005][2005];
int dist[2005][2005];
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};
queue<pair<int,int>> q;
vector<pair<int,int>> v;
int res;
int cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
            if(arr[i][j]=='X'){
                dist[i][j]=0;
                q.emplace(i,j);
            }
            else{
                dist[i][j]=INF;
                if(arr[i][j]=='A')v.emplace_back(i,j);
            }
        }
    }
    while(!q.empty()){
        auto [i,j]=q.front();
        q.pop();
        for(int k=0;k<4;++k){
            int ni=i+di[k];
            int nj=j+dj[k];
            if(ni<0 or ni>=n or ni<0 or nj>=m)continue;
            if(arr[ni][nj]=='W')continue;
            if(dist[ni][nj]>dist[i][j]+1){
                dist[ni][nj]=dist[i][j]+1;
                q.emplace(ni,nj);
            }
        }
    }
    for(auto [i,j]:v){
        if(dist[i][j]!=INF){
            res+=dist[i][j];
            ++cnt;
        }
    }
    cout<<cnt<<" "<<res*2;
    return 0;
}