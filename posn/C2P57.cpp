#include<bits/stdc++.h>
using namespace std;
int n,y,z;
int dp[100005];
bool visited[100005];
int solve(int k){
    if(k==1)return 1;
    if(visited[k])return dp[k];
    for(int i=1;i<=k;++i){
        dp[k]=min(dp[k],max(solve(i-1)+y,solve(k-i)+z));
    }
    visited[k]=true;
    return dp[k];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>y>>z;
    for(int i=1;i<=n;++i){
        dp[i]=2e9;
    }
    dp[0]=-2e9;
    cout<<solve(n);
    return 0;
}