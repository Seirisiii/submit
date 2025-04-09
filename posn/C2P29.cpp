#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m;
int degi[N];
int dego[N];
set<int> adj[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        adj[u].insert(v);
        ++degi[v];
        ++dego[u];
    }
    for(int i=1;i<=n;++i){
        cout<<i;
        for(auto j:adj[i]){
            cout<<"->"<<j;
        }
        cout<<"\n";
    }
    for(int i=1;i<=n;++i){
        cout<<degi[i]<<" "<<dego[i]<<"\n";
    }
    return 0;
}