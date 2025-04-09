#include<bits/stdc++.h>
using namespace std;
string s;
int dp[1005][1005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;++i)dp[i][i]=1;
    for(int len=2;len<=n;++len){
        for(int l=0;l<=n-len;++l){
            int r=l+len-1;
            if(s[l]==s[r])dp[l][r]=2+dp[l+1][r-1];
            else dp[l][r]=max(dp[l+1][r],dp[l][r-1]);
        }
    }
    cout<<dp[0][n-1];
    return 0;
}