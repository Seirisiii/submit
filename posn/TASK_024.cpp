#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int n,m;
int dist[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;++i){
        int u,v;
        cin>>u>>v;
        dist[u][v]=1;
        dist[v][u]=1;
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cout<<dist[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}