#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
ll dp[20005];
ll mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        ll x;
        cin>>x;
        dp[i]=max(x,dp[i-1]+x);
        mx=max(mx,dp[i]);
    }
    cout<<mx;
    return 0;
}