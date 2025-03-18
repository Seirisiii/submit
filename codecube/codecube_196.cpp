#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=1e5+5;
const ll INF=1e18;
int n,m;
vector<pair<int,ll>> adj[N];
priority_queue<pair<ll,int>,vector<pair<ll,int>>,greater<pair<ll,int>>> pq;
int a,b,c,d;
vector<ll> dista(N,INF);
vector<ll> distb(N,INF);
vector<ll> distc(N,INF);
bool visited[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w);
    }
    cin>>a>>b>>c>>d;
    pq.emplace(0,a);
    dista[a]=0;
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>dista[u])continue;
        for(auto [v,w]:adj[u]){
            if(dista[u]+w<dista[v]){
                dista[v]=dista[u]+w;
                pq.emplace(dista[v],v);
            }
        }
    }
    pq.emplace(0,b);
    distb[b]=0;
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>distb[u])continue;
        if(dista[u]+distb[u]==dista[b])visited[u]=true;
        for(auto [v,w]:adj[u]){
            if(distb[u]+w<distb[v]){
                distb[v]=distb[u]+w;
                pq.emplace(distb[v],v);
            }
        }
    }
    pq.emplace(0,c);
    distc[c]=0;
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>distc[u])continue;
        if(visited[u])continue;
        for(auto [v,w]:adj[u]){
            if(visited[v])continue;
            if(distc[u]+w<distc[v]){
                distc[v]=distc[u]+w;
                pq.emplace(distc[v],v);
            }
        }
    }
    if(distc[d]!=INF)cout<<distc[d];
    else cout<<-1;
    return 0;
}