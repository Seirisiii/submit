#include<bits/stdc++.h>
using namespace std;
const int MAX=51;
int m,n;
long long dp[MAX][MAX];
bool no[MAX][MAX];
int o;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    cin>>o;
    for(int i=0;i<o;++i){
        int x,y;
        cin>>x>>y;
        no[x][y]=true;
    }
    dp[1][1]=1;
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            if(no[i][j])continue;
            if(i==1 and j==1)continue;
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    cout<<dp[m][n];
    return 0;
}