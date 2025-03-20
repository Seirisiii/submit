#include<bits/stdc++.h>
using namespace std;
const int N=105;
const int X=1e6+5;
const int MOD=1e9+7;
int n,x;
int c[N];
int dp[X];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for(int i=0;i<n;++i){
        cin>>c[i];
    }
    dp[0]=1;
    for(int i=1;i<=x;++i){
        for(int j=0;j<n;++j){
            if(c[j]<=i)dp[i]=(dp[i]+dp[i-c[j]])%MOD;
        }
    }
    cout<<dp[x];
    return 0;
}