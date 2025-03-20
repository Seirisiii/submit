#include<bits/stdc++.h>
using namespace std;
const int M=2e4+1;
int n,m,k;
int r[M];
int p[M];
int dp[2][M];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for(int i=1;i<=m;++i){
        cin>>r[i];
    }
    for(int i=1;i<=k;++i){
        cin>>p[i];
    }
    r[m+1]=n;
    for(int i=0;i<=m+1;++i){
        for(int j=0;j<=k;++j){
            if(i==0 and j>0)dp[i%2][j]=-1e9;
            else if(j==1)dp[i%2][j]=p[1]*r[i];
            else dp[i%2][j]=max(dp[(i-1)%2][j-1],dp[(i-1)%2][j])+(r[i]-r[i-1])*p[j];
        }
    }
    cout<<dp[(m+1)%2][k];
    return 0;
}