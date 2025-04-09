#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
const int MOD=1e9+7;
int n,k;
int dp[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=k;++i){
        dp[i]=(2*(dp[i-1]%MOD))%MOD;
        dp[i]%=MOD;
    }
    for(int i=k+1;i<=n;++i){
        dp[i]=((2*(dp[i-1]%MOD))-(dp[i-k-1]%MOD))%MOD;
        if(dp[i]<0)dp[i]+=MOD;
        dp[i]%=MOD;
    }
    cout<<dp[n];
    return 0;
}