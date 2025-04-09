#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1005;
const int M=1e5+5;
const int W=1005;
int n,m,w;
int a[N];
int b[N];
int c[M];
int d[M];
pair<int,int> p[M];
int arr[W];
int dp[W];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>w;
    for(int i=1;i<=n;++i){
        cin>>a[i];
    }
    for(int i=1;i<=n;++i){
        cin>>b[i];
    }
    for(int i=1;i<=m;++i){
        cin>>c[i];
    }
    for(int i=1;i<=m;++i){
        cin>>d[i];
    }
    for(int i=1;i<=m;++i){
        p[i]={c[i]/d[i],i};
    }
    sort(p+1,p+m+1);
    for(int i=1;i<=m;++i){
        for(int j=w;j>0;--j){
            if(j-d[p[i].second]>=0)dp[j]=max(dp[j],dp[j-d[p[i].second]]+c[p[i].second]);
            else dp[j]=max(dp[j],p[i].first*j);
        }
    }
    for(int i=1;i<=n;++i){
        for(int j=w;j>0;--j){
            if(j-b[i]>=0)dp[j]=max(dp[j],dp[j-b[i]]+a[i]);
        }
    }
    cout<<dp[w]<<".00";
    return 0;
}