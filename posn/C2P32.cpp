#include<bits/stdc++.h>
using namespace std;
const int N=25;
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
    }
    int s,e;
    cin>>s>>e;
    for(int i=1;i<=V;++i){
        cout<<i;
        for(auto u:adj[i]){
            cout<<"->"<<u;
        }
        cout<<"\n";
    }
    queue<int> q;
    q.emplace(s);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        if(u==e){
            cout<<"Yes";
            return 0;
        }
        if(visited[u])continue;
        visited[u]=true;
        for(auto v:adj[u]){
            if(visited[v])continue;
            q.emplace(v);
        }
    }
    cout<<"No";
    return 0;
}