#include<bits/stdc++.h>
using namespace std;
const int MOD=9871;
int TC;
int dp[1001][1001];
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
    for(int i=1;i<=1000;++i){
        for(int j=1;j<=i;++j){
            dp[i][j]=(dp[i-1][j-1]+dp[i-1][j]*j)%MOD;
        }
    }
    cin>>TC;
    while(TC--)runcase();
    return 0;
}