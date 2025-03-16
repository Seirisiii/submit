#include<bits/stdc++.h>
using namespace std;
const int N=1e5+1;
int n,m,k;
priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;
priority_queue<int> W;
int parent[N];
int res;
int find_parent(int i){
    return i==parent[i]?i:parent[i]=find_parent(parent[i]);
}
void union_parent(int u,int v){
    parent[u]=v;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for(int i=0;i<n;++i){
        parent[i]=i;
    }
    for(int i=0;i<m;++i){
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
        W.emplace(w);
    }
    while(k--){
        int w=W.top()/2;
        W.pop();
        W.emplace(w);
    }
    while(W.size()){
        res+=W.top();
        W.pop();
    }
    cout<<res;
    return 0;
}