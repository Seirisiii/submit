#include<bits/stdc++.h>
using namespace std;
const int N=55;
int V,E;
int parent[N];
vector<pair<int,int>> adj[N];
priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;
int cost;
int find_parent(int i){
    if(i==parent[i])return i;
    return parent[i]=find_parent(parent[i]);
}   
void union_parent(int u,int v){
    parent[u]=v;
    return ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>V>>E;
    for(int i=1;i<=V;++i){
        parent[i]=i;
    }
    for(int i=0;i<E;++i){
        int u,v,w;
        cin>>u>>v>>w;
        pq.emplace(w,u,v);
    }
    while(!pq.empty()){
        auto [w,u,v]=pq.top();
        pq.pop();
        u=find_parent(u);
        v=find_parent(v);
        if(u==v)continue;
        union_parent(u,v);
        cost+=w;
    }
    cout<<cost;
    return 0;
}