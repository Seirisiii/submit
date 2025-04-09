#include<bits/stdc++.h>
using namespace std;
const int N=20;
int n;
int arr[N][N];
bool visited[N][N];
int di[8]={-1,-1,0,1,1,1,0,-1};
int dj[8]={0,1,1,1,0,-1,-1,-1};
int res;
void bfs(int I,int J){
    queue<pair<int,int>> q;
    q.emplace(I,J);
    while(!q.empty()){
        auto [i,j]=q.front();
        q.pop();
        if(visited[i][j])continue;
        visited[i][j]=true;
        for(int k=0;k<8;++k){
            int ni=i+di[k];
            int nj=j+dj[k];
            if(ni<0 or ni>=n or nj<0 or nj>=n)continue;
            if(visited[ni][nj])continue;
            q.emplace(ni,nj);
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
            if(arr[i][j]==0)visited[i][j]=true;
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j]==1 and !visited[i][j]){
                bfs(i,j);
                ++res;
            }
        }
    }
    cout<<res;
    return 0;
}