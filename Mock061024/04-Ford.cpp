#include<bits/stdc++.h>
using namespace std;
int n,a,arr[200001],dp[101][2],ans=INT_MAX;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    cin>>a;
    for(int j=arr[1];j<=100;++j){
        dp[j][1]=(j-arr[1])*(j-arr[1]);
    }
    for(int i=2;i<=n;++i){
        int now=(i%2),pre=now^1;
        for(int j=0;j<101;++j){
            dp[j][now]=INT_MAX;
        }
        for(int j=arr[i];j<=100;++j){
            for(int k=arr[i-1];k<=100;++k){
                dp[j][now]=min(dp[j][now],a*abs(j-k)+dp[k][pre]+((j-arr[i])*(j-arr[i])));
            }
        }
    }
    for(int i=arr[n];i<=100;++i){
        ans=min(dp[i][n%2],ans);
    }
    cout<<ans;
    return 0;
}