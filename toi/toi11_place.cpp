#include<bits/stdc++.h>
using namespace std;
const int N=2e5+1;
int n,m;
priority_queue<tuple<int,int,int>> pq;
long long cost;
int parent[N];
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
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        parent[i]=i;
    }
    for(int i=0;i<m;++i){
        int s,d,l;
        cin>>s>>d>>l;
        --l;
        pq.emplace(l,s,d);
    }
    while(!pq.empty()){
        auto [l,s,d]=pq.top();
        pq.pop();
        int u=find_parent(s);
        int v=find_parent(d);
        if(u==v)continue;
        union_parent(u,v);
        cost+=l;
    }
    cout<<cost;
    return 0;
}