#include<bits/stdc++.h>
using namespace std;
int n,k;
priority_queue<pair<int,pair<int,int>>> pq;
int deg[105];
int parent[105];
int cnt;
int cost;
int find_parent(int i){
    if(parent[i]==i)return i;
    return parent[i]=find_parent(parent[i]);
}
void union_parent(int u,int v){
    ++deg[u];
    ++deg[v];
    u=find_parent(u);
    v=find_parent(v);
    parent[u]=v;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<n;++i){
        parent[i]=i;
    }
    for(int i=0;i<k;++i){
        int s,t,d;
        cin>>s>>t>>d;
        pq.push({-d,{s,t}});
    }
    while(!pq.empty()){
        int d=-pq.top().first;
        int s=pq.top().second.first;
        int t=pq.top().second.second;
        pq.pop();
        if(find_parent(s)==find_parent(t))continue;
        union_parent(s,t);
        cost+=d;
    }
    for(int i=0;i<n;++i){
        if(deg[i]==1)++cnt;
        else if(deg[i]==0)cost=0;
    }
    if(cost==0)cout<<-1;
    else cout<<cost<<"\n"<<cnt;
    return 0;
}
