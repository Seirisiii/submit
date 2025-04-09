#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int MOD=1e9+7;
const int N=1005;
int n;
long long dp[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    dp[0]=1;
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;++i){
        dp[i]=(2*dp[i-1]%MOD+dp[i-3]%MOD)%MOD;
    }
    cout<<dp[n]%MOD;
    return 0;
}