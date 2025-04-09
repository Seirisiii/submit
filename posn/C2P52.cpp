#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int u,n;
long long dp[10005][5005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>u>>n;
    dp[0][0]=1;
    for(int i=1;i<=u;++i){
        dp[i][1]=i;
    }
    for(int i=1;i<=u;++i){
        for(int j=2;j<=n;++j){
            if(i-2<0 or j-1<0)continue;
            dp[i][j]=(dp[i-2][j-1]%MOD+dp[i-1][j]%MOD)%MOD;
        }
    }
    cout<<dp[u][n]%MOD;
    return 0;
}