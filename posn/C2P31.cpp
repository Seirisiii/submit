#include<bits/stdc++.h>
using namespace std;
const int N=55;
int V,E;
vector<pair<int,int>> adj[N];
bool visited[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>V>>E;
    for(int i=0;i<E;++i){
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w);
    }
    int prev=-1;
    int u;
    int st,ed,res=0;
    bool cycle=false;
    bool next=true;
    int cost=0;
    while(cin>>u and u!=-1){
        if(prev==-1){
            prev=u;
            st=u;
            ed=u;
            continue;
        }
        if(!next)continue;
        if(cycle)continue;
        if(visited[u])cycle=true;
        visited[u]=true;
        for(auto [v,w]:adj[prev]){
            if(v==u){
                ed=u;
                next=true;
                cost+=w;
                break;
            }
            next=false;
        }
        ++res;
        prev=u;
    }
    if(!next)--res;
    cout<<res<<" "<<cost;
    return 0;
}