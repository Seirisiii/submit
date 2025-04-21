#include<bits/stdc++.h>
using namespace std;
const int L=65;
string s1,s2,s3,s4;
int dp[L][L][L][L];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s1>>s2>>s3>>s4;
    int z1=s1.size();
    int z2=s2.size();
    int z3=s3.size();
    int z4=s4.size();
    for(int i=0;i<=z1;++i){
        for(int j=0;j<=z2;++j){
            for(int k=0;k<=z3;++k){
                for(int l=0;l<=z4;++l){
                    if(i==0 or j==0 or k==0 or l==0)dp[i][j][k][l]=0;
                    else if(s1[i-1]==s2[j-1] and s1[i-1]==s3[k-1] and s1[i-1]==s4[l-1] and s2[j-1]==s3[k-1] and s2[j-1]==s4[l-1] and s3[k-1]==s4[l-1])dp[i][j][k][l]=1+dp[i-1][j-1][k-1][l-1];
                    else dp[i][j][k][l]=max({dp[i-1][j][k][l],dp[i][j-1][k][l],dp[i][j][k-1][l],dp[i][j][k][l-1]});
                }
            }
        }
    }
    cout<<dp[z1][z2][z3][z4];
    return 0;
}