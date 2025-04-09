#include<bits/stdc++.h>
using namespace std;
int n;
int arr[1000005];
int dp[1000005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
        dp[i]=arr[i];
    }
    for(int i=2;i<=n;++i){
        dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
    }
    cout<<dp[n];
    return 0;
}