#include<bits/stdc++.h>
using namespace std;
int u,n;
long long dp[105][25];
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
            dp[i][j]=dp[i-2][j-1]+dp[i-1][j];
        }
    }
    cout<<dp[u][n];
    return 0;
}