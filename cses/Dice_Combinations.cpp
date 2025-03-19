#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
const int MOD=1e9+7;
int n;
long long dp[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    dp[4]=8;
    dp[5]=16;
    dp[6]=32;
    for(int i=6;i<=n;++i){
        dp[i]=(dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%MOD;
    }
    cout<<dp[n];
    return 0;
}