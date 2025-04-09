#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
const int N=10000;
int n;
vector<pair<int,int>> adj[N]; 
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
int dist[N];
bool visited[N];
int cost;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int x;
            cin>>x;
            adj[i].emplace_back(j,x);
        }
        dist[i]=INF;
    }
    pq.emplace(0,0);
    dist[0]=0;
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(visited[u])continue;
        visited[u]=true;
        cost+=dist[u];
        for(auto [v,w]:adj[u]){
            if(!visited[v] and w<dist[v]){
                dist[v]=w;
                pq.emplace(dist[v],v);
            }
        }
    }
    cout<<cost;
    return 0;
}