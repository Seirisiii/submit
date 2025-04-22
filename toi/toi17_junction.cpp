#include<bits/stdc++.h>
using namespace std;
const int N=80005;
int n;
vector<pair<int,int>> adj[N];
vector<int> e;
bool visited[N];
int l,r;
int res;
void dfs(int u){
    if(visited[u])return ;
    visited[u]=true;
    for(auto [v,w]:adj[u]){
        if(visited[v])continue;
        dfs(v);
        e.push_back(w);
    }
    return ;
}
bool solve(int mid){
    int sum=0;
    int cnt=0;
    for(auto i:e){
        sum+=i;
        if(sum>=mid){
            sum=0;
            ++cnt;
        }
    }
    return cnt>=3;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w);
        r+=w;
    }
    for(int i=0;i<=n;++i){
        if(adj[i].size()==1){
            dfs(i);
            break;
        }
    }
    while(l<=r){
        int mid=(l+r)/2;
        if(solve(mid)){
            l=mid+1;
            res=mid;
        }
        else r=mid-1;
    }
    cout<<res;
    return 0;
}