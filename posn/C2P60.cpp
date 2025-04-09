#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
string s1,s2;
int dp[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s1>>s2;
    int n=s1.length();
    int m=s2.length();
    for(int i=0;i<=n;++i){
        for(int j=0;j<=m;++j){
            if(i==0 or j==0)dp[i][j]=0;
            else if(s1[i-1]==s2[j-1])dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[n][m];
    return 0;
}