#include<bits/stdc++.h>
using namespace std;
const int N=1000;
int n,m;
char arr[N][N];
bool visited[N][N];
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};
int res;
int mx;
int mn=2e9;
void solve(int i,int j,int cnt){
    if(i<0 or i>=n or j<0 or j>=m)return;
    if(i==n-1 and j==m-1){
        ++res;
        mx=max(mx,cnt);
        mn=min(mn,cnt);
        return ;
    }
    if(visited[i][j])return;
    visited[i][j]=true;
    for(int k=0;k<4;++k){
        int ni=i+di[k];
        int nj=j+dj[k];
        if(ni<0 or ni>=n or nj<0 or nj>=m)continue;
        if(visited[ni][nj])continue;
        if(arr[ni][nj]=='x')continue;
        solve(ni,nj,cnt+1);
        visited[ni][nj]=false;
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
        }
    }
    solve(0,0,1);
    cout<<res<<" "<<mx<<" "<<mn;
    return 0;
}