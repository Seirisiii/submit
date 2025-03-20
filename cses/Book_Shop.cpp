#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
const int X=1e5+5;
int n,x;
int h[N],s[N];
int dp[N][X];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for(int i=0;i<n;++i){
        cin>>h[i];
    }
    for(int i=0;i<n;++i){
        cin>>s[i];
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=x;++j){
            if(h[i-1]>j)dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j],dp[i-1][j-h[i-1]]+s[i-1]);
        }
    }
    cout<<dp[n][x];
    return 0;
}