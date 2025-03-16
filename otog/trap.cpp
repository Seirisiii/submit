#include<bits/stdc++.h>
using namespace std;
const int N=1e5+1;
const int INF=1e9;
int n,m,q;
int s,t;
int dists[N];
int distt[N];
vector<pair<int,int>> adj[N];
vector<pair<int,int>> radj[N]; 
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>q>>s>>t;
    for(int i=1;i<=n;++i){
        dists[i]=INF;
        distt[i]=INF;
    }
    for(int i=0;i<m;++i){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].emplace_back(v,w);
        radj[v].emplace_back(u,w);
    }
    pq.emplace(0,s);
    dists[s]=0;
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>dists[u])continue;
        for(auto [v,w]:adj[u]){
            if(dists[u]+w>=dists[v])continue;
            dists[v]=dists[u]+w;
            pq.emplace(dists[v],v);
        }
    }
    pq.emplace(0,t);
    distt[t]=0;
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>distt[u])continue;
        for(auto [v,w]:radj[u]){
            if(distt[u]+w>=distt[v])continue;
            distt[v]=distt[u]+w;
            pq.emplace(distt[v],v);
        }
    }
    while(q--){
        int k;
        cin>>k;
        cout<<dists[k]+distt[k]<<"\n";
    }
    return 0;
}