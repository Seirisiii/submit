#include<bits/stdc++.h>
using namespace std;
int n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    int arr[n+1][m+1]={};
    int dp[n+1][m+1]={};
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=n;++i){
        dp[i][1]=dp[i-1][1]+arr[i][1];
    }
    for(int j=1;j<=m;++j){
        dp[1][j]=dp[1][j-1]+arr[1][j];
    }
    for(int i=2;i<=n;++i){
        for(int j=2;j<=m;++j){
            dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+arr[i][j];
        }
    }
    cout<<dp[n][m];
    return 0;
}