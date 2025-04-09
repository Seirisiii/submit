#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+5;
int n;
ll regular[N];
ll express[N];
ll expressCost;
vector<ll> dp(N,1e18);
vector<ll> dp_r(N,1e18);
vector<ll> dp_e(N,1e18);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>regular[i];
    }
    for(int i=0;i<n;++i){
        cin>>express[i];
    }
    cin>>expressCost;
    dp_r[0]=0;
    dp_e[0]=expressCost;
    for(int i=1;i<=n;++i){
        dp_r[i]=min(dp_r[i],dp_e[i-1]+regular[i-1]);
        dp_r[i]=min(dp_r[i],dp_r[i-1]+regular[i-1]);
        dp_e[i]=min(dp_e[i],dp_e[i-1]+express[i-1]);
        dp_e[i]=min(dp_e[i],dp_r[i]+expressCost);
        dp[i]=min(dp_r[i],dp_e[i]);
        cout<<dp[i]<<" ";      
    }
    return 0;
}