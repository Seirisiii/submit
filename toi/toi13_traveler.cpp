#include<bits/stdc++.h>
using namespace std;
const int INF=2e9;
const int N=1e4+1;
int n,m;
int x,y,z;
vector<pair<int,int>> adj[N];
vector<int> dist(N,INF);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    cin>>x>>y>>z;
    for(int i=0;i<m;++i){
        int u,v,d;
        cin>>u>>v>>d;
        adj[u].emplace_back(v,d);
        adj[v].emplace_back(u,d);
    }
    dist[x]=0;
    pq.emplace(0,x);
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>dist[u])continue;
        for(auto [v,w]:adj[u]){
            if(dist[u]+w>=dist[v])continue;
            dist[v]=dist[u]+w;
            pq.emplace(dist[v],v);
        }
    }
    if(dist[y]<=z)cout<<y<<" "<<dist[y]<<" 0";
    else{
        vector<int> distb(N,INF);
        distb[y]=0;
        pq.emplace(0,y);
        while(!pq.empty()){
            auto [d,u]=pq.top();
            pq.pop();
            if(d>distb[u])continue;
            for(auto [v,w]:adj[u]){
                if(distb[u]+w>=distb[v])continue;
                distb[v]=distb[u]+w;
                pq.emplace(distb[v],v);
            }
        }
        int mn=INF;
        int res=0;
        for(int i=0;i<n;++i){
            if(dist[i]<=z and distb[i]<mn){
                mn=distb[i];
                res=i;
            }
        }
        cout<<res<<" "<<dist[res]<<" "<<distb[res];
    }
    return 0;
}