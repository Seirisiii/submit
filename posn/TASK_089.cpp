#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+5;
int n;
ll mx=INT_MIN;
ll dp[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        ll x;
        cin>>x;
        dp[i]=max(x,x+dp[i-1]);
        mx=max(mx,dp[i]);
    }
    cout<<mx;
    return 0;
}