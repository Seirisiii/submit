#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
const int N=305;
int n;
int c[N];
int dp[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>c[i];
    }
    for(int i=1;i<=n;++i){
        for(int l=1;l+i-1<=n;++l){
            int r=l+i-1;
            dp[l][r]=INF;
            for(int k=l;k<=r;++k){
                dp[l][r]=min(dp[l][r],c[k]+max(dp[l][k-1],dp[k+1][r]));
            }
        }
    }
    cout<<dp[1][n];
    return 0;
}