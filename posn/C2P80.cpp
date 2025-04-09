#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=2e5+5;
const ll INF=1e18;
int n,m;
int s,e;
vector<pair<int,ll>> adj[N];
ll dists[N];
ll diste[N];
ll dist[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>s>>e;
    for(int i=0;i<m;++i){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w);
    }
    for(int i=1;i<=n;++i){
        dists[i]=INF;
        diste[i]=INF;
        dist[i]=INF;
    }
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    pq.emplace(0,s);
    dists[s]=0;
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>dists[u])continue;
        for(auto [v,w]:adj[u]){
            if(dists[v]>dists[u]+w){
                dists[v]=dists[u]+w;
                pq.emplace(dists[v],v);
            }
        }
    }
    pq.emplace(0,e);
    diste[e]=0;
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>diste[u])continue;
        for(auto [v,w]:adj[u]){
            if(diste[v]>diste[u]+w){
                diste[v]=diste[u]+w;
                pq.emplace(diste[v],v);
            }
        }
    }
    ll se=dists[e];
    pq.emplace(0,s);
    dist[s]=0;
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>dist[u])continue;
        for(auto [v,w]:adj[u]){
            if(dists[v]+diste[v]!=se and dists[u]+diste[u]==se){
                if(dist[v]>w){
                    dist[v]=w;
                    pq.emplace(dist[v],v);
                    continue;
                }
            }
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                pq.emplace(dist[v],v);
            }
        }
    }
    int q;
    cin>>q;
    while(q--){
        int u;
        cin>>u;
        if(dists[u]+diste[u]==se){
            cout<<"0\n";
            continue;
        }
        cout<<dist[u]<<"\n";
    }
    return 0;
}