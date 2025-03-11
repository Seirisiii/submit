#include<bits/stdc++.h>
using namespace std;
const int N=1e3+1;
int m,n;
pair<int,int> dp[N][N];
pair<int,int> mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>dp[i][j].first;
            if(i==0)dp[i][j].second=1;
            else{
                if(i%2){
                    if(j==n-1){
                        dp[i][j].first+=dp[i-1][j].first;
                        dp[i][j].second=dp[i-1][j].second;
                    }
                    else{
                        if(dp[i-1][j].first>dp[i-1][j+1].first){
                            dp[i][j].first+=dp[i-1][j].first;
                            dp[i][j].second=dp[i-1][j].second;
                        }
                        else if(dp[i-1][j].first<dp[i-1][j+1].first){
                            dp[i][j].first+=dp[i-1][j+1].first;
                            dp[i][j].second=dp[i-1][j+1].second;
                        }
                        else{
                            dp[i][j].first+=dp[i-1][j].first;
                            dp[i][j].second=dp[i-1][j].second+dp[i-1][j+1].second;
                        }
                    }
                }
                else{
                    if(j==0){
                        dp[i][j].first+=dp[i-1][j].first;
                        dp[i][j].second=dp[i-1][j].second;
                    }
                    else{
                        if(dp[i-1][j-1].first>dp[i-1][j].first){
                            dp[i][j].first+=dp[i-1][j-1].first;
                            dp[i][j].second=dp[i-1][j-1].second;
                        }
                        else if(dp[i-1][j-1].first<dp[i-1][j].first){
                            dp[i][j].first+=dp[i-1][j].first;
                            dp[i][j].second=dp[i-1][j].second;
                        }
                        else{
                            dp[i][j].first+=dp[i-1][j].first;
                            dp[i][j].second=dp[i-1][j-1].second+dp[i-1][j].second;
                        }
                    }
                }
            }
            if(mx.first<dp[i][j].first)mx=dp[i][j];
            else if(mx.first==dp[i][j].first)mx.second+=dp[i][j].second;
        }
    }
    cout<<mx.first<<" "<<mx.second;
    return 0;
}