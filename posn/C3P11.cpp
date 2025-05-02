#include<bits/stdc++.h>
using namespace std;
int n,m;
int k;
int x[405],y[405];
int dist[405][405];
vector<vector<int>> dp(405,vector<int>(1<<12,-1));
int solve(int pos,int mask){
    if(mask==(1<<(k+1))-1)return dist[pos][0];
    if(dp[pos][mask]!=-1)return dp[pos][mask];
    int ans=1e9;
    for(int i=0;i<=k;++i){
        if(i==pos or mask&(1<<i))continue;
        ans=min(ans,solve(i,mask|(1<<i))+dist[pos][i]);
    }
    return dp[pos][mask]=ans;
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
    cout<<solve(0,1);
    return 0;
}