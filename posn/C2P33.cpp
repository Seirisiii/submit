#include<bits/stdc++.h>
using namespace std;
int n;
map<int,vector<int>> adj;
map<int,bool> visited;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int u,v;
        cin>>u>>v;
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    while(true){
        for(auto i:visited){
            visited[i.first]=false;
        }
        int res=adj.size();
        int s,dist;
        cin>>s>>dist;
        if(s==0 and dist==0)break;
        if(adj.find(s)==adj.end()){
            cout<<res<<"\n";
            continue;
        }
        queue<pair<int,int>> q;
        q.emplace(s,dist);
        while(!q.empty()){
            auto [u,d]=q.front();
            q.pop();
            if(d<0)break;
            if(visited[u])continue;
            visited[u]=true;
            --res;
            for(auto v:adj[u]){
                if(visited[v])continue;
                q.emplace(v,d-1);
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}