#include<bits/stdc++.h>
using namespace std;
int n,m;
int dp[10000][10000];
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin>>dp[i][j];
            if(dp[i][j]==0)continue;
            dp[i][j]=min({dp[i][j-1],dp[i-1][j],dp[i-1][j-1]})+1;
            mx=max(mx,dp[i][j]);
        }
    }
    cout<<mx;
    return 0;
}