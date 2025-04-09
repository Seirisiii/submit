#include<bits/stdc++.h>
using namespace std;
int n,k;
int arr[10005];
long long dp[10005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    cin>>k;
    dp[0]=0;
    for(int i=1;i<=k;++i){
        for(int j=1;j<=i;++j){
            dp[i]=max(dp[i],arr[j]+dp[i-j]);
        }
    }
    cout<<dp[k];
    return 0;
}