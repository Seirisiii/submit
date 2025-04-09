#include<bits/stdc++.h>
using namespace std;
int n;
int arr[31];
int mx;
long long dp[31];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        mx=max(mx,arr[i]);
    }
    dp[0]=1;
    dp[2]=3;
    for(int i=4;i<=mx;++i){
        dp[i]=4*dp[i-2]-dp[i-4];
    }
    for(int i=0;i<n;++i){
        cout<<dp[arr[i]]<<"\n";
    }
    return 0;
}