#include<bits/stdc++.h>
using namespace std;
int n,x;
int h[1005];
int s[1005];
int dp[1005][100005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for(int i=0;i<n;++i){
        cin>>h[i];
    }
    for(int i=0;i<n;++i){
        cin>>s[i];
    }
    dp[0][0]=0;
    for(int i=1;i<=n;++i){
        for(int j=0;j<=x;++j){
            dp[i][j]=dp[i-1][j];
            if(j-h[i-1]>=0)dp[i][j]=max(dp[i][j],dp[i-1][j-h[i-1]]+s[i-1]);
        }
    }
    cout<<dp[n][x];
    return 0;
}