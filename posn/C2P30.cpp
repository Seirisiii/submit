#include<bits/stdc++.h>
using namespace std;
const int N=55;
int V,E;
vector<int> adj[N];
bool visited[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>V>>E;
    for(int i=0;i<E;++i){
        int u,v;
        cin>>u>>v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    int prev=-1;
    int u;
    int st,ed,res=0;
    bool cycle=false;
    bool next=true;
    while(cin>>u and u!=-1){
        if(prev==-1){
            prev=u;
            st=u;
            ed=u;
            continue;
        }
        if(!next)continue;
        if(visited[u])cycle=true;
        visited[u]=true;
        for(auto v:adj[prev]){
            if(v==u){
                ed=u;
                next=true;
                break;
            }
            next=false;
        }
        prev=u;
        ++res;
    }
    if(!next)--res;
    cout<<st<<" "<<ed<<" "<<res;
    if(cycle)cout<<" YES";
    else cout<<" NO";
    return 0;
}