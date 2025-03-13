#include<bits/stdc++.h>
using namespace std;
const int M=1e6;
int m;
long long n;
long long t[M];
long long mx;
long long mn=LLONG_MAX;
long long res;
bool solve(long long ti){
    long long sum=0;
    for(int i=0;i<m;++i){
        sum+=ti/t[i];
    }
    return sum>=n;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m;++i){
        cin>>t[i];
        mx=max(mx,t[i]);
        mn=min(mn,t[i]);
    }
    long long l=mn,r=mx*n;
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