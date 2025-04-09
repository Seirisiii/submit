#include<bits/stdc++.h>
using namespace std;
int n;
long long dp[1005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=n;++i){
        dp[i]=dp[i-1]+4*dp[i-2];
        for(int j=3;j<=i;++j){
            if(j&1)dp[i]+=2*dp[i-j];
            else dp[i]+=3*dp[i-j];
        }
    }
    cout<<dp[n];
    return 0;
}