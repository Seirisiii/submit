#include<bits/stdc++.h>
using namespace std;
const int N=1005;
string s1,s2;
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s1>>s2;
    int n=s1.size();
    for(int i=0;i<n;++i){
        int ans=0;
        int idx=i;
        for(int j=0;j<n;++j){
            if(s2[idx]==s1[j]){
                ++ans;
                ++idx;
            }
        }
        mx=max(mx,ans);
    }
    cout<<n-mx;
    return 0;
}