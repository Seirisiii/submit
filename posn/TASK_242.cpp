#include<bits/stdc++.h>
using namespace std;
const int N='z'+1;
int TC;
int mp[N];
void runcase(){
    string s;
    cin>>s;
    int sz=s.size();
    int dp[10005][5][5]={};
    for(int i=sz-1;i>=0;--i){
        for(int l=0;l<4;++l){
            for(int r=0;r<4;++r){
                if(mp[s[i]]==l or mp[s[i]]==r)dp[i][l][r]=1+dp[i+1][l][r];
                else dp[i][l][r]=max(dp[i+1][mp[s[i]]][r],dp[i+1][l][mp[s[i]]]);
            }
        }
    }
    cout<<dp[0][0][2]<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    mp['L']=0;
    mp['U']=1;
    mp['R']=2;
    mp['D']=3;
    while(TC--)runcase();
    return 0;
}