#include<bits/stdc++.h>
using namespace std;
int TC;
void runcase(){
    int n,t;
    cin>>n>>t;
    int arr[n+5]={};
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    bool dp[n+5][t+5]={};
    for(int i=0;i<=n;++i){
        dp[i][0]=true;
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=t;++j){
            dp[i][j]=dp[i-1][j]; 
            if(j-arr[i-1]>=0)dp[i][j]=dp[i-1][j] or dp[i-1][j-arr[i-1]];
        }
    }
    if(dp[n][t])cout<<"YES\n";
    else cout<<"NO\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}