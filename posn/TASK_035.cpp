#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m;
set<int> adj[N];
int s;
bool visited[N];
void bfs(int st){
    queue<int> q;
    q.emplace(st);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(visited[u])continue;
        visited[u]=true;
        cout<<u<<" ";
        for(auto v:adj[u]){
            q.emplace(v);
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        adj[u].emplace(v);
        adj[v].emplace(u);
    }
    cin>>s;
    bfs(s);
    return 0;
}