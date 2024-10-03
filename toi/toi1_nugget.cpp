#include<bits/stdc++.h>
using namespace std;
int n;
bool dp[101];
bool check;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    dp[0]=true;
    for(int i=6;i<=n;++i){
        if(i>=20)dp[i]=dp[i-6] or dp[i-9] or dp[i-20];
        else if(i>=9)dp[i]=dp[i-6] or dp[i-9];
        else if(i>=6)dp[i]=dp[i-6];
        if(dp[i]){
            cout<<i<<"\n";
            check=true;
        }
    }
    if(!check)cout<<"no";
    return 0;
}