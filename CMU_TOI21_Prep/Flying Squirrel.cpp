#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
int n,s,t;
int tree[2005];
vector<int> adj[2005];
int dist[2005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s>>t;
    for(int i=0;i<n;++i){
        dist[i]=INF;
        int u,x;
        cin>>u>>tree[u]>>x;
        for(int j=0;j<x;++j){
            int v;
            cin>>v;
            adj[u].emplace_back(v);
            adj[v].emplace_back(u);
        }
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.emplace(0,s);
    dist[s]=0;
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>dist[u])continue;
        for(auto v:adj[u]){
            if(tree[u]<=tree[v])continue;
            int w=tree[u]-tree[v];
            if(dist[u]+w<dist[v]){
                dist[v]=dist[u]+w;
                pq.emplace(dist[v],v);
            }
        }
    }
    dist[t]==INF?cout<<-1:cout<<dist[t];
    return 0;
}