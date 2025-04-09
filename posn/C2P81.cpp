#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,k;
ll dp[55];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    dp[0]=1;
    for(int i=1;i<=n;++i){
        for(int j=min(i,k);j>0;--j){
            dp[j]+=dp[j-1];
        }
    }
    cout<<dp[k];
    return 0;
}