#include<bits/stdc++.h>
using namespace std;
char c;
map<char,vector<char>> adj;
map<char,bool> visited;
int res;
void bfs(char i){
    queue<char> q;
    q.push(i);
    while(!q.empty()){
        char u=q.front();
        q.pop();
        if(visited[u])continue;
        visited[u]=true;
        for(auto v:adj[u]){
            if(visited[v])continue;
            q.push(v);
        } 
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c;
    for(char i='A';i<=c;++i){
        visited[i]=false;
    }
    string s;
    while(cin>>s){
        char u=s[0];
        char v=s[1];
        adj[u].emplace_back(v);
        adj[v].emplace_back(u);
    }
    for(char i='A';i<=c;++i){
        if(visited[i])continue;
        bfs(i);
        ++res;
    }
    cout<<res;
    return 0;
}