#include<bits/stdc++.h>
using namespace std;
const int N=301;
int n;
vector<pair<char,int>> adj[27];
int node[27];
char st;
bool visited[N];
void dfs(int u){
    for(auto i:adj[u]){
        if(visited[i.second])continue;
        visited[i.second]=true;
        dfs(i.first);
    }
    printf("%c ",u+'A');
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        int u=s[0]-'A';
        int v=s[1]-'A';
        adj[u].emplace_back(v,i);
        adj[v].emplace_back(u,i);
        ++node[u];
        ++node[v];
    }
    for(int i=0;i<27;++i){
        if(node[i]%2==1){
            dfs(i);
            return 0;
        }
    }
    dfs(0);
    return 0;
}