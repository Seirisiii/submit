#include<bits/stdc++.h>
using namespace std;
const int MOD=1e6+7;
int n,m;
int dp[50005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    dp[0]=1;
    for(int i=0;i<n;++i){
        int v;
        cin>>v;
        for(int j=m;j>=v;--j){
            dp[j]=(dp[j]+dp[j-v])%MOD;
        }
    }
    cout<<dp[m];
    return 0;
}