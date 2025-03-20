#include<bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
const int N=1e3+5;
int n;
char arr[N][N];
int dp[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    dp[0][0]=1;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
            if(i==0 and j==0){
                if(arr[i][j]=='*'){
                    cout<<0;
                    return 0;
                }
                continue;
            }
            if(arr[i][j]=='*')continue;
            if(i>0)dp[i][j]=(dp[i][j]+dp[i-1][j])%MOD;
            if(j>0)dp[i][j]=(dp[i][j]+dp[i][j-1])%MOD;
        }
    }
    cout<<dp[n-1][n-1];
    return 0;
}