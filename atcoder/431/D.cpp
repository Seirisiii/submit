#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=505;
int n;
ll w[N],h[N],b[N];
ll res,w_total;
ll dp[N][N*N];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>w[i]>>h[i]>>b[i];
		res+=b[i];
		w_total+=w[i];
	}
	ll W=w_total/2;
	for(int i=1;i<=n;++i){
		for(int j=0;j<=W;++j){
			dp[i][j]=-9e18;
		}
	}
	dp[0][0]=0;
	for(int i=1;i<=n;++i){
		int diff=h[i-1]-b[i-1];
		for(int j=0;j<=W;++j){
			dp[i][j]=dp[i-1][j];
			if(diff<0)continue;
			if(j>=w[i-1])dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i-1]]+diff);
		}
	}
	cout<<res+dp[n][W];
	return 0;
}