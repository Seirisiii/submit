#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e3+5;
int n,m;
ll c;
ll arr[N];
vector<ll> dp(N,1e18);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>c;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    dp[0]=0;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;++j){
            dp[i]=min(dp[i],dp[j-1]+(arr[i]-arr[j])*(arr[i]-arr[j])+c);
        }
    }
    while(m--){
        int x;
        cin>>x;
        cout<<dp[x]<<"\n";
    }
    return 0;
}