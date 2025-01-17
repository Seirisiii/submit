#include<bits/stdc++.h>
using namespace std;
int n;
vector<pair<int,int>> adj[100002];
queue<pair<int,int>> q;
bool visited[100002];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n-1;++i){
        int x,y,z;
        cin>>x>>y>>z;
        adj[x].emplace_back(y,z);
        adj[y].emplace_back(x,z);
    }
    q.emplace(1,0);
    while(!q.empty()){
        int u=q.front().first;
        int d=q.front().second;
        q.pop();
        if(visited[u])continue;
        visited[u]=true;
        res=max(res,d);
        for(auto [v,c]:adj[u]){
            if(visited[v])continue;
            q.emplace(v,d+c);
        }
    }
    cout<<res;
    return 0;
}