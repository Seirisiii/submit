#include<bits/stdc++.h>
using namespace std;
const int N=205;
const int R=1505;
const int MOD=10000009;
int n,m,r;
char arr[N][N];
int dp[N][N][R];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>r;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
        }
    }
    dp[0][0][0]=1;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(arr[i][j]=='#')continue;
            for(int k=0;k<=r;++k){
                if(arr[i][j]=='X' and k>0){
                    if(i>0)dp[i][j][k]=(dp[i][j][k]+dp[i-1][j][k-1])%MOD;
                    if(j>0)dp[i][j][k]=(dp[i][j][k]+dp[i][j-1][k-1])%MOD;
                    continue;
                }
                if(arr[i][j]=='X' and k==0)continue;
                if(i>0)dp[i][j][k]=(dp[i][j][k]+dp[i-1][j][k])%MOD;
                if(j>0)dp[i][j][k]=(dp[i][j][k]+dp[i][j-1][k])%MOD;
            }
        }
    }
    for(int k=0;k<=r;++k){
        res=(res+dp[n-1][m-1][k])%MOD;
    }
    cout<<res;
    return 0;
}