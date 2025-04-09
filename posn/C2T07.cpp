#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=405;
int n,m,k;
ll arr[N][N];
ll dp[N][N][N];
ll res=-1e18;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin>>arr[i][j];
        }
    }
    for(int l=0;l<=k;++l){
        for(int j=1;j<=m;++j){
            for(int i=1;i<=n;++i){
                dp[l][i][j]=dp[l][i][j-1];
                if(i-1>0)dp[l][i][j]=max(dp[l][i][j],dp[l][i-1][j-1]);
                if(i+1<=n)dp[l][i][j]=max(dp[l][i][j],dp[l][i+1][j-1]);
                if(l>0){
                    if(i-1>0)dp[l][i][j]=max(dp[l][i][j],dp[l-1][i-1][j-1]+arr[i-1][j]);
                    if(i+1<=n)dp[l][i][j]=max(dp[l][i][j],dp[l-1][i+1][j-1]+arr[i+1][j]);
                }
                dp[l][i][j]+=arr[i][j];
            }
        }
    }
    for(int l=0;l<=k;++l){
        for(int i=1;i<=n;++i){
            res=max(res,dp[l][i][m]);
        }
    }
    cout<<res;
    return 0;
}