#include<bits/stdc++.h>
using namespace std;
int m,n;
char arr[1000][1000];
int res;
bool visited[1000][1000];
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};
void bfs(int I,int J){
    queue<pair<int,int>> q;
    q.emplace(I,J);
    while(!q.empty()){
        auto [i,j]=q.front();
        q.pop();
        if(visited[i][j])continue;
        visited[i][j]=true;
        for(int k=0;k<4;++k){
            int ni=di[k]+i;
            int nj=dj[k]+j;
            if(ni<0 or ni>=m or nj<0 or nj>=n)continue;
            if(visited[ni][nj])continue;
            q.emplace(ni,nj);
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
            if(arr[i][j]=='0')visited[i][j]=true;
        }
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j]=='1' and !visited[i][j]){
                ++res;
                bfs(i,j);
            }
        }
    }
    cout<<res;
    return 0;
}