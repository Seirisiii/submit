#include<bits/stdc++.h>
using namespace std;
int m;
int x,y;
int arr[20][20];
bool visited[20][20];
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};
int mx=-6;
void dfs(int i,int j){
    if(visited[i][j] or i<0 or i>=m or j<0 or j>=m)return ;
    visited[i][j]=true;
    mx=max(mx,arr[i][j]);
    for(int k=0;k<4;++k){
        int ni=i+di[k];
        int nj=j+dj[k];
        if(visited[ni][nj] or ni<0 or ni>=m or nj<0 or nj>=m)continue ;
        if(arr[ni][nj]>arr[i][j])dfs(ni,nj);
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>x>>y;
    --x,--y;
    for(int i=0;i<m;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
            if(arr[i][j]==100)visited[i][j]=true;
        }
    }
    dfs(y,x);
    cout<<mx;
    return 0;
}