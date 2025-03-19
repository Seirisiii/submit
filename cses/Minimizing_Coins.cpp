#include<bits/stdc++.h>
using namespace std;
const int N=105;
const int X=1e6+5;
int n,x;
int c[N];
int dp[X];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for(int i=0;i<n;++i){
        cin>>c[i];
    }
    dp[0]=0;
    for(int i=1;i<=x;++i){
        dp[i]=1e9;
        for(int j=0;j<n;++j){
            if(c[j]<=i)dp[i]=min(dp[i],dp[i-c[j]]+1);
        }
    }
    if(dp[x]!=1e9)cout<<dp[x];
    else cout<<-1;
    return 0;
}