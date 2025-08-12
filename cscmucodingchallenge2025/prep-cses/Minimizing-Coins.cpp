#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
int n,x;
int c[105];
int dp[1000005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for(int i=0;i<n;++i){
        cin>>c[i];
    }
    dp[0]=0;
    for(int i=1;i<=x;++i){
        dp[i]=INF;
        for(int j=0;j<n;++j){
            if(i-c[j]>=0)dp[i]=min(dp[i],dp[i-c[j]]+1);
        }
    }
    if(dp[x]==INF)cout<<-1;
    else cout<<dp[x];
    return 0;
}