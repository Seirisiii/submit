#include<bits/stdc++.h>
using namespace std;
const int MAX=1e3+5;
int n,m;
char arr[MAX][MAX];
bool visited[MAX][MAX];
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};
int res;
void bfs(int I,int J){
    queue<pair<int,int>> q;
    q.emplace(I,J);
    while(!q.empty()){
        auto [i,j]=q.front();
        q.pop();
        if(visited[i][j])continue ;
        visited[i][j]=true;
        for(int k=0;k<4;++k){
            int ni=i+di[k];
            int nj=j+dj[k];
            if(ni<0 or ni>=n or nj<0 or nj>=m)continue;
            if(visited[ni][nj])continue;
            q.emplace(ni,nj);
        }
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
            if(arr[i][j]=='#')visited[i][j]=true;
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(arr[i][j]=='.' and !visited[i][j]){
                bfs(i,j);
                ++res;
            }
        }
    }
    cout<<res;
    return 0;
}