#include<bits/stdc++.h>
using namespace std;
int n;
int dp[2500];
int s,e;
int ss,ee;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>dp[0];
    int sum=dp[0];
    int mx=max(0,dp[0]);
    for(int i=1;i<n;++i){
        cin>>dp[i];
        if(dp[i]>dp[i]+sum){
            s=i;
            e=i;
            sum=dp[i];
        }
        else{
            sum+=dp[i];
            e=i;
        }
        if(mx<sum){
            ss=s;
            ee=e;
            mx=sum;
        }
    }
    if(mx==0){
        cout<<"Empty sequence";
        return 0;
    }
    for(int i=ss;i<=ee;++i){
        cout<<dp[i]<<" ";
    }
    cout<<"\n"<<mx;
    return 0;
}
