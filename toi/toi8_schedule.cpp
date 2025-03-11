#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
int m;
int n;
int J[N];
int K[N];
pair<int,int> dp[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>J[i];
    }
    for(int i=1;i<=n;++i){
        cin>>K[i];
    }
    dp[0][0]={1,0};
    for(int i=0;i<=n;++i){
        for(int j=0;j<=n;++j){
            if(i==0 and j==0)continue;
            pair<int,int> p1={1e9,0},p2={1e9,0};
            if(i>0){
                if(dp[i-1][j].second+J[i]<=m)p1={dp[i-1][j].first,dp[i-1][j].second+J[i]};
                else p1={dp[i-1][j].first+1,J[i]};
            }
            if(j>0){
                if(dp[i][j-1].second+K[j]<=m)p2={dp[i][j-1].first,dp[i][j-1].second+K[j]};
                else p2={dp[i][j-1].first+1,K[j]};
            }
            dp[i][j]=min(p1,p2);
        }
    }
    cout<<dp[n][n].first<<"\n"<<dp[n][n].second;
    return 0;
}