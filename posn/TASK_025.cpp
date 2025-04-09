#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m;
set<int> adj[N];
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
    for(int i=1;i<=n;++i){
        cout<<i<<" | ";
        for(auto u:adj[i]){
            cout<<u<<" ";
        }
        cout<<"\n";
    }
    return 0;
}