#include<bits/stdc++.h>
using namespace std;
const int N=105;
const int X=1e6+5;
const int MOD=1e9+7;
int n,x;
int c[N];
int dp[X];
int  main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x;
    for(int i=0;i<n;++i){
        cin>>c[i];
    }
    dp[0]=1;
    for(int i=0;i<n;++i){
        for(int j=c[i];j<=x;++j){
            dp[j]=(dp[j]+dp[j-c[i]])%MOD;
        }
    }
    cout<<dp[x];
    return 0;
}