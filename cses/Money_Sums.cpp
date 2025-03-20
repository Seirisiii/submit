#include<bits/stdc++.h>
using namespace std;
const int N=105;
const int X=1005;
int n;
int x[N];
int sum;
bool dp[N][N*X];
int cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>x[i];
        sum+=x[i];
    }
    dp[0][0]=true;
    for(int i=1;i<=n;++i){
        for(int j=0;j<=sum;++j){
            dp[i][j]=dp[i-1][j];
            if(x[i-1]<=j and dp[i-1][j-x[i-1]])dp[i][j]=true;
        }
    }
    for(int i=1;i<=sum;++i){
        if(dp[n][i])++cnt;
    }
    cout<<cnt<<"\n";
    for(int i=1;i<=sum;++i){
        if(dp[n][i])cout<<i<<" ";
    }
    return 0;
}