#include<bits/stdc++.h>
using namespace std;
int r,c;
char arr[1000][1000];
bool visited[1000][1000];
bool flooded[1000][1000];
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};
int cnt;
int res;
void dfs_water(int i,int j){
    if(i<0 or j<0 or i>=r or j>=c)return ;
    if(visited[i][j])return ;
    if(arr[i][j]=='X')return ;
    if(flooded[i][j])return ;
    visited[i][j]=true;
    flooded[i][j]=true;
    for(int k=0;k<4;++k){
        int ni=i+di[k];
        int nj=j+dj[k];
        if(ni<0 or nj<0 or ni>=r or nj>=c)continue;
        if(visited[ni][nj])continue;
        if(arr[ni][nj]=='X')continue;
        if(flooded[ni][nj])continue;
        dfs_water(ni,nj);
    }
    return ;
}
void dfs_solve(int i,int j){
    if(i<0 or j<0 or i>=r or j>=c)return ;
    if(visited[i][j])return ;
    visited[i][j]=true;
    for(int k=0;k<4;++k){
        int ni=i+di[k];
        int nj=j+dj[k];
        if(ni<0 or nj<0 or ni>=r or nj>=c)continue;
        if(flooded[ni][nj]){
            ++cnt;
            continue;
        }
        if(arr[ni][nj]=='X' and !visited[ni][nj])dfs_solve(ni,nj);
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>r>>c;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>arr[i][j];
        }
    }
    dfs_water(0,0);
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            if(arr[i][j]=='X' and !visited[i][j]){
                dfs_solve(i,j);
                res=max(res,cnt);
                cnt=0;
            }
        }
    }
    cout<<res;
    return 0;
}