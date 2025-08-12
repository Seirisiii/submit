#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
int n;
int dp[1000005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    dp[0]=0;
    for(int i=1;i<=n;++i){
        dp[i]=INF;
        int x=i;
        while(x){
            dp[i]=min(dp[i],dp[i-x%10]+1);
            x/=10;
        }
    }
    cout<<dp[n];
    return 0;
}