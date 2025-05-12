#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e4+5;
int n;
ll v,w;
ll o[N];
ll e[N];
ll dp[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>v>>w;
    for(ll i=1;i<=n;++i){
        o[i]=o[i-1];
        e[i]=e[i-1];
        ll x;
        cin>>x;
        if(x%2==0)e[i]+=x;
        else o[i]+=x;
    }
    for(int i=2;i<=n;i+=2){
        dp[i]=1e18;
        for(int j=0;j<i;j+=2){
            int mid=(i-j)/2+j;
            if(o[mid]-o[j]<=v and e[i]-e[mid]<=w and dp[j]!=-1)dp[i]=min(dp[i],dp[j]+1);
        }
        if(dp[i]==1e18)dp[i]=-1;
    }
    cout<<dp[n];
    return 0;
}