#include<bits/stdc++.h>
using namespace std;
int n;
int s[1000],d[1000];
int ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s[i]>>d[i];
    }
    ans=s[0];
    for(int i=0;i<n-1;++i){
        while(s[i+1]<=s[i])s[i+1]+=d[i+1];
    }
    cout<<s[n-1];
    return 0;
}
