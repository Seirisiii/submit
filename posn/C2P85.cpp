#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=95;
int n,m;
ll dp[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    dp[0]=1;
    for(int i=1;i<=m;++i){
        dp[i]=dp[i-1];
    }
    for(int i=m;i<=n;++i){
        dp[i]=dp[i-1]+dp[i-m];
    }
    cout<<dp[n];
    return 0;
}