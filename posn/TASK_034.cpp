#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m;
set<int> adj[N];
int s;
bool visited[N];
void dfs(int u){
    if(visited[u])return ;
    visited[u]=true;
    cout<<u<<" ";
    for(auto v:adj[u]){
        dfs(v);
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
    dfs(s);
    return 0;
}