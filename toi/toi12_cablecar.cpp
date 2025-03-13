#include<bits/stdc++.h>
using namespace std;
const int N=2501;
int n,m;
vector<pair<int,int>> adj[N];
int s,d,p;
int res=2e9;
bool visited[N];
int dist[N];
int mx;
void dijk(int st){
    priority_queue<pair<int,int>> pq;
    dist[st]=2e9;
    pq.emplace(2e9,st);
    while(!pq.empty()){
        int u=pq.top().second;
        pq.pop();
        if(visited[u])continue;
        visited[u]=true;
        for(auto [v,w]:adj[u]){
            int W=min(dist[u],w);
            if(W>dist[v]){
                dist[v]=W;
                pq.emplace(dist[v],v);
            }
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int u,v,w;
        cin>>u>>v>>w;
        --w;
        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w);
    }
    cin>>s>>d>>p;
    dijk(s);
    cout<<(p-1)/dist[d]+1;
    return 0;
}