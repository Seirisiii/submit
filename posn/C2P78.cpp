#include<bits/stdc++.h>
using namespace std;
const int N=1005;
const int INF=1e9;
int TC;
void runcase(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> adj[N];
    int dist[N]={};
    bool negative=false;
    for(int i=0;i<m;++i){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].emplace_back(v,w);
    }
    for(int i=0;i<n;++i){
        dist[i]=INF;
    }
    dist[0]=0;
    for(int i=0;i<n-1;++i){
        for(int u=0;u<n;++u){
            for(auto [v,w]:adj[u]){
                dist[v]=min(dist[v],dist[u]+w);
            }
        }
    }
    for(int u=0;u<n;++u){
        for(auto [v,w]:adj[u]){
            if(dist[v]>dist[u]+w){
                negative=true;
                break;
            }
        }
    }
    if(negative)cout<<"possible\n";
    else cout<<"not possible\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}