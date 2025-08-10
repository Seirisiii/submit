#include<bits/stdc++.h>
using namespace std;
const int N=1e5+7;
int n,m;
int s,t;
vector<pair<int,long double>> adj[N];
long double dist[N];
int parent[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        dist[i]=LDBL_MAX;
        parent[i]=-1;
    }
    cin>>s>>t;
    for(int i=0;i<m;++i){
        int u,v;
        long double w;
        cin>>u>>v>>w;
        adj[u].emplace_back(v,log(w));
        adj[v].emplace_back(u,log(w));
    }
    priority_queue<pair<long double,int>,vector<pair<long double,int>>,greater<pair<long double,int>>> pq;
    dist[s]=0;
    pq.emplace(0,s);
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if(d>dist[u])continue;
        for(auto [v,w]:adj[u]){
            if(dist[v]>dist[u]+w){
                parent[v]=u;
                dist[v]=dist[u]+w;
                pq.emplace(dist[v],v);
            }
        }
    }
    stack<int> stk;
    int par=t;
    while(par!=-1){
        stk.emplace(par);
        par=parent[par];
    }
    while(!stk.empty()){
        cout<<stk.top()<<" ";
        stk.pop();
    }
    return 0;
}