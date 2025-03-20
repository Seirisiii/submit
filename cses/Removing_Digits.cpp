#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int n;
int dp[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    dp[0]=0;
    for(int i=1;i<=n;++i){
        dp[i]=1e9;
        int x=i;
        while(x){
            int d=x%10;
            dp[i]=min(dp[i],dp[i-d]+1);
            x/=10;
        }
    }
    cout<<dp[n];
    return 0;
}