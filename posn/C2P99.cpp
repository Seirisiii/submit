#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
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
            if(i==0 and j==0)continue;
            if(i==0)dp[i][j]=j;
            else if(j==0)dp[i][j]=i;
            else if(s1[i-1]==s2[j-1])dp[i][j]=1+dp[i-1][j-1];
            else dp[i][j]=1+min(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout<<dp[n][m];
    return 0;
}