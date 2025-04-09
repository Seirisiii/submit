#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=55;
int n,f,sum;
ll dp[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>f>>sum;
    dp[0][0]=1;
    for(int i=1;i<=n;++i){
        for(int j=0;j<=sum;++j){
            for(int k=1;k<=f;++k){
                if(j-k>=0)dp[i][j]+=dp[i-1][j-k];
            }
        }
    }
    cout<<dp[n][sum];
    return 0;
}