#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int dp[10001][5001];
int TC;
void runcase(){
    int n,k;
    cin>>n>>k;
    cout<<dp[n][k]<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    dp[0][0]=1;
    for(int i=1;i<=10000;++i){
        dp[i][0]=1;
        int mn=min(i,5000);
        for(int j=1;j<=mn;++j){
            dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%MOD;
        }
    }
    cin>>TC;
    while(TC--)runcase();
    return 0;
}