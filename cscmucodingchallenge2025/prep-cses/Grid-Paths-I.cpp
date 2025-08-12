#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int n;
char arr[1005][1005];
int dp[1005][1005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    if(arr[0][0]=='*'){
        cout<<0;
        return 0;
    }
    dp[0][0]=1;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i==0 and j==0)continue;
            if(arr[i][j]=='*')dp[i][j]=0;
            else if(i==0)dp[i][j]=dp[i][j-1]%MOD;
            else if(j==0)dp[i][j]=dp[i-1][j]%MOD;
            else dp[i][j]=(dp[i-1][j]+dp[i][j-1])%MOD;
        }
    }
    cout<<dp[n-1][n-1];
    return 0;
}