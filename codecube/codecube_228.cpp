#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll INF=1e18;
int n,m;
ll k,t;
vector<pair<int,ll>> adj[100005];
ll dist[100005][2];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k>>t;
    for(int i=1;i<=n;++i){
        dist[i][0]=INF;
        dist[i][1]=INF;
    }
    for(int i=0;i<m;++i){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w);
    }
    priority_queue<tuple<ll,int,int>,vector<tuple<ll,int,int>>,greater<tuple<ll,int,int>>> pq;
    dist[1][0]=0;
    dist[1][1]=0;
    pq.emplace(0,1,0);
    pq.emplace(0,1,1);
    while(!pq.empty()){
        auto [d,u,state]=pq.top();
        pq.pop();
        if(d>dist[u][state])continue;
        for(auto [v,w]:adj[u]){
            if(state==0){
                if(dist[v][1]>dist[u][0]+k){
                    dist[v][1]=dist[u][0]+k;
                    pq.emplace(dist[v][1],v,1);
                }
            }
            if(dist[v][state]>dist[u][state]+w){
                dist[v][state]=dist[u][state]+w;
                pq.emplace(dist[v][state],v,state);
            }
        }
    }
    ll res=min(dist[n][0],dist[n][1]);
    if(res<=t)cout<<"Happy Winnie the Pooh :3\n"<<res;
    else cout<<"No Honey TT";
    return 0;
}