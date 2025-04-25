#include<bits/stdc++.h>
using namespace std; 
int n,m,row,col;
int qs[5005][5005];
vector<tuple<int,int,int>> t;
int res;
bool solve(int mid){
    for(auto [r,c,w]:t){
        int r1=max(1,r-mid);
        int c1=max(1,c-mid);
        int r2=min(row,r+mid);
        int c2=min(col,c+mid);
        int sum=qs[r2][c2]-qs[r1-1][c2]-qs[r2][c1-1]+qs[r1-1][c1-1];
        if(sum<w)return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>row>>col;
    for(int i=0;i<n;++i){
        int r,c,w;
        cin>>r>>c>>w;
        t.emplace_back(r,c,w);
    }
    for(int i=0;i<m;++i){
        int r,c;
        cin>>r>>c;
        qs[r][c]=1;
    }
    for(int i=1;i<=row;++i){
        for(int j=1;j<=col;++j){
            qs[i][j]+=qs[i-1][j]+qs[i][j-1]-qs[i-1][j-1];
        }
    }
    int l=0,r=max(row,col);
    while(l<=r){
        int mid=(l+r)/2;
        if(!solve(mid))l=mid+1;
        else{
            r=mid-1;
            res=mid;
        }
    }
    cout<<res;
    return 0;
}