#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+7;
int n;
int m;
int k;
vector<pair<int,ll>> adj[N];
ll dist[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<=n;++i){
        dist[i]=LLONG_MAX;
    }
    cin>>m;
    for(int i=0;i<m;++i){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w);
    }
    cin>>k;
    for(int i=0;i<k;++i){
        int x;
        ll c;
        cin>>x>>c;
        adj[n].emplace_back(x,c);
    }
    priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
    dist[n]=0;
    pq.emplace(0,n);
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
    cout<<dist[0];
    return 0;
}