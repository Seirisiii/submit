#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int n,x;
int c[105];
int dp[1000005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for(int i=0;i<n;++i){
        cin>>c[i];
    }
    dp[0]=1;
    for(int i=1;i<=n;++i){
        for(int j=c[i-1];j<=x;++j){
            dp[j]=(dp[j]+dp[j-c[i-1]])%MOD;
        }
    }
    cout<<dp[x];
    return 0;
}