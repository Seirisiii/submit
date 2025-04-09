#include<bits/stdc++.h>
using namespace std;
int x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x;
    long long dp[x+5]={};
    cin>>dp[0]>>dp[1];
    for(int i=2;i<=x;++i){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[x];
    return 0;
}