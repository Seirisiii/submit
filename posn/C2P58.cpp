#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1005;
int n;
ll d;
ll w[N],a[N];
ll dp[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>d;
    for(int i=0;i<n;++i){
        cin>>w[i];
    }
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<=n;++i){
        for(int j=0;j<=d;++j){
            if(i==0 or j==0)continue;
            if(j-w[i-1]>=0)dp[i][j]=max(dp[i-1][j],a[i-1]+dp[i-1][j-w[i-1]]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][d];
    return 0;
}