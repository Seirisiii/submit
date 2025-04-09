#include<bits/stdc++.h>
using namespace std;
int n,m;
int x[21],y[21];
int k;
int dist[21][21];
int dp[21][1<<21];
int tsp(int pos,int bitmask){
    if(bitmask==(1<<(k+1))-1)return dist[pos][0];
    if(dp[pos][bitmask]!=-1)return dp[pos][bitmask];
    int res=2e9;
    for(int i=0;i<=k;++i){
        if(i!=pos and !(bitmask&(1<<i)))res=min(res,dist[pos][i]+tsp(i,bitmask|(1<<i)));
    }
    return dp[pos][bitmask]=res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    cin>>x[0]>>y[0];
    cin>>k;
    for(int i=1;i<=k;++i){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<=k;++i){
        for(int j=0;j<=k;++j){
            dist[i][j]=abs(x[i]-x[j])+abs(y[i]-y[j]);
        }
    }
    for(int i=0;i<=k;++i){
        for(int j=0;j<1<<(k+1);++j){
            dp[i][j]=-1;
        }
    }
    cout<<tsp(0,1);
    return 0;
}