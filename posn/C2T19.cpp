#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+5;
int n,m,k;
int parent[N];
int ra[N];
ll cost;
priority_queue<tuple<ll,int,int>> pq;
vector<int> adj[N];
bool visited1[N];
bool visited2[N];
int find_parent(int i){
    if(parent[i]==i)return i;
    return parent[i]=find_parent(parent[i]);
}
void union_parent(int u,int v){
    if(ra[u]>=ra[v]){
        parent[v]=u;
        ra[u]+=ra[v];
        ra[v]=0;
    }
    else{
        parent[u]=v;
        ra[v]+=ra[u];
        ra[u]=0;
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for(int i=1;i<=n;++i){
        parent[i]=i;
        ra[i]=1;
    }
    for(int i=0;i<m;++i){
        int u,v;
        ll w;
        cin>>u>>v>>w;
        pq.emplace(w,u,v);
    }
    while(!pq.empty()){
        auto [w,u,v]=pq.top();
        pq.pop();
        int s=find_parent(u);
        int t=find_parent(v);
        if(s==t)continue;
        union_parent(s,t);
        cost+=w;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int node=1;
    queue<int> q;
    q.push(1);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(visited1[u])continue;
        visited1[u]=true;
        node=u;
        for(auto v:adj[u]){
            q.push(v);
        }
    }
    for(int i=1;i<=n;++i){
        if(!visited1[i]){
            cout<<"AYGOMH";
            return 0;
        }
    }
    int mx=0;
    queue<pair<int,int>> q2;
    q2.emplace(node,0);
    while(!q2.empty()){
        auto [u,cnt]=q2.front();
        q2.pop();
        if(visited2[u])continue;
        visited2[u]=true;
        mx=max(mx,cnt);
        for(auto v:adj[u]){
            q2.emplace(v,cnt+1);
        }
    }
    cout<<cost<<"\n";
    if(k==1)cout<<mx;
    return 0;
}