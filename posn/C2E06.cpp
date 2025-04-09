#include<bits/stdc++.h>
using namespace std;
int n,t,w1,w2;
int dp[301][101][101];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>t>>w1>>w2;
    for(int i=0;i<n;++i){
        int vi,ti,wi;
        cin>>vi>>ti>>wi;
        for(int j=t;j-ti>=0;--j){
            for(int k=w1;k-wi>=0;--k){
                for(int l=w2;l>=0;--l){
                    dp[j][k][l]=max(dp[j][k][l],dp[j-ti][k-wi][l]+vi);
                }
            }
            for(int k=w1;k>=0;--k){
                for(int l=w2;l-wi>=0;--l){
                    dp[j][k][l]=max(dp[j][k][l],dp[j-ti][k][l-wi]+vi);
                }
            }
        }
    }
    cout<<dp[t][w1][w2];
    return 0;
}