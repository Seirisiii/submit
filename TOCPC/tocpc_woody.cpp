#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll INF=1e18;
int n,x,y;
ll dp[505][505];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>x>>y;
    for(int i=0;i<=x;++i){
        for(int j=0;j<=y;++j){
            dp[i][j]=INF;
        }
    }
    dp[0][0]=0;
    for(int i=0;i<n;++i){
        int xi,yi;
        ll c;
        cin>>xi>>yi>>c;
        for(int dx=x;dx>=0;--dx){
            for(int dy=y;dy>=0;--dy){
                int nx=min(dx+xi,x);
                int ny=min(dy+yi,y);
                dp[nx][ny]=min(dp[nx][ny],dp[dx][dy]+c);
            }
        }
    }
    cout<<(dp[x][y]==INF?-1:dp[x][y]);
    return 0;
}