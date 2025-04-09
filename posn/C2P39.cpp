#include<bits/stdc++.h>
using namespace std;
const int N=100;
int n,m;
int x,y;
bool visited[N][N];
int di[8]={-1,-2,-2,-1,1,2,2,1};
int dj[8]={-2,-1,1,2,2,1,-1,-2};
int res;
void solve(int i,int j,int cnt){
    if(cnt==n*m){
        ++res;
        return ;
    }
    if(visited[i][j])return ;
    visited[i][j]=true;
    for(int k=0;k<8;++k){
        int ni=i+di[k];
        int nj=j+dj[k];
        if(ni<0 or ni>=n or nj<0 or nj>=m)continue;
        if(visited[ni][nj])continue;
        solve(ni,nj,cnt+1);
        visited[ni][nj]=false;
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    cin>>x>>y; 
    solve(x,y,1);
    cout<<res;
    return 0;
}