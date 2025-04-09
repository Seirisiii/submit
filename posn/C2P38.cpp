#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
const int N=2005;
int n,s,t;
vector<int> adj[N];
int arr[N];
int dist[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s>>t;
    for(int i=0;i<n;++i){
        int u,x;
        cin>>u;
        cin>>arr[u];
        cin>>x;
        for(int j=0;j<x;++j){
            int v;
            cin>>v;
            adj[u].emplace_back(v);
            adj[v].emplace_back(u);
        }
        dist[i]=INF;
    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    dist[s]=0;
    pq.emplace(0,s);
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>dist[u])continue;
        for(auto v:adj[u]){
            if(arr[u]<=arr[v])continue;
            int w=arr[u]-arr[v];
            if(dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;
                pq.emplace(dist[v],v);
            }
        }
    }
    if(dist[t]==INF)cout<<-1;
    else cout<<dist[t];
    return 0;
}