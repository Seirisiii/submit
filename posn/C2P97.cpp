#include<bits/stdc++.h>
using namespace std;
int TC;
const int INF=1e9;
void runcase(){
    vector<pair<int,int>> adj[20005];
    int dist[20005]={};
    int n,m,s,t;
    cin>>n>>m>>s>>t;
    for(int i=0;i<n;++i){
        dist[i]=INF;
    }
    for(int i=0;i<m;++i){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w);
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.emplace(0,s);
    dist[s]=0;
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>dist[u])continue;
        for(auto [v,w]:adj[u]){
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                pq.emplace(dist[v],v);
            }
        }
    }
    if(dist[t]==INF)cout<<"unreachable\n";
    else cout<<dist[t]<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}