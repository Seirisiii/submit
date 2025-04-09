#include<bits/stdc++.h>
using namespace std;
int n,m,t,d;
int parent[100005];
int res;
int find_parent(int i){
    if(parent[i]==i)return i;
    return parent[i]=find_parent(parent[i]);
}
void union_parent(int u,int v){
    parent[v]=u;
    return ;
}
queue<pair<int,int>> q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>t>>d;
    for(int i=0;i<n;++i){
        parent[i]=i;
    }
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        q.emplace(u,v);
    }
    while(!q.empty()){
        auto [u,v]=q.front();
        q.pop();
        u=find_parent(u);
        v=find_parent(v);
        if(u==v)continue;
        union_parent(u,v);
    }
    for(int i=0;i<t;++i){
        int u,v;
        cin>>u>>v;
        q.emplace(u,v);
    }
    while(!q.empty() and d--){
        auto [u,v]=q.front();
        q.pop();
        u=find_parent(u);
        v=find_parent(v);
        if(u==v)continue;
        union_parent(u,v);
    }
    while(!q.empty()){
        auto [u,v]=q.front();
        q.pop();
        u=find_parent(u);
        v=find_parent(v);
        if(u==v)continue;
        union_parent(u,v);
        ++res;
    }
    for(int i=1;i<n;++i){
        if(parent[i]!=parent[0]){
            cout<<-1;
            return 0;
        }
    }
    cout<<res;
    return 0;
}