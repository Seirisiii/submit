#include<bits/stdc++.h>
using namespace std;
const int INF=INT_MAX;
const int N=2e4+5;
int n,m,k,p;
int g[N];
vector<pair<int,int>> adj[N];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
vector<int> dist(N,INF);
int parent[N];
vector<int> adj2[N];
queue<int> q;
bool visited[N];
vector<pair<int,int>> res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k>>p;
    for(int i=0;i<n;++i){
        parent[i]=i;
    }
    for(int i=0;i<k;++i){
        cin>>g[i];
    }
    for(int i=0;i<m;++i){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w);
    }
    pq.emplace(0,p);
    dist[p]=0;
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>dist[u])continue;
        for(auto [v,w]:adj[u]){
            if(dist[u]+w>=dist[v])continue;
            dist[v]=dist[u]+w;
            parent[v]=u;
            pq.emplace(dist[v],v);
        }
    }
    for(int i=0;i<k;++i){
        int cur=g[i];
        while(cur!=p){
            int par=parent[cur];
            adj2[par].emplace_back(cur);
            cur=par;
        }
    }
    q.emplace(p);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:adj2[u]){
            if(visited[v])continue;
            visited[v]=true;
            res.emplace_back(min(u,v),max(u,v));
            q.emplace(v);
        }
    }
    for(int i=0;i<k;++i){
        cout<<dist[g[i]]<<" ";
    }
    cout<<"\n"<<res.size()<<"\n";
    for(int i=res.size()-1;i>=0;--i){
        auto [a,b]=res[i];
        cout<<a<<" "<<b<<"\n";
    }
    return 0;
}