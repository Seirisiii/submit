#include<bits/stdc++.h>
using namespace std;
const int N=2e6+1;
int n;
long long s[N];
long long mx;
long long res;
bool solve(long long m){
    long long q=0;
    for(int i=0;i<n;++i){
        if(s[i]<=m)continue;
        if(q!=0){
            if(q!=s[i])return false;
            else q=0;
        }
        else q=s[i];
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s[i];
        mx=max(mx,s[i]);
    }
    long long l=0,r=mx;
    while(l<=r){
        long long mid=(l+r)/2;
        if(solve(mid)){
            res=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<res;
    return 0;
}