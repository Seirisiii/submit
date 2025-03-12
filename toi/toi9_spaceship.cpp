#include<bits/stdc++.h>
using namespace std;
const int MAXM=11;
int n;
int m;
int x[MAXM],y[MAXM],z[MAXM];
int M[MAXM],K[MAXM],C[MAXM];
bool visited[MAXM];
int res=1e9;
void solve(int in,int mi,int ki,int ci,int d){
    if(mi>=n and ki>=n and ci>=n){
        res=min(res,d);
        return ;
    }
    for(int i=1;i<=m;++i){
        if(visited[i])continue;
        visited[i]=true;
        int dist=(x[in]-x[i])*(x[in]-x[i])+(y[in]-y[i])*(y[in]-y[i])+(z[in]-z[i])*(z[in]-z[i]);
        solve(i,mi+M[i],ki+K[i],ci+C[i],d+dist);
        visited[i]=false;
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>x[0]>>y[0]>>z[0];
    cin>>m;
    for(int i=1;i<=m;++i){
        cin>>x[i]>>y[i]>>z[i];
        cin>>M[i]>>K[i]>>C[i];
    }
    solve(0,0,0,0,0);
    cout<<res;
    return 0;
}