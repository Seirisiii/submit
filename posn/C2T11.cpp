#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long qs[100005];
long long mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        long long x;
        cin>>x;
        ++qs[x];
        mx=max(mx,x);
    }
    for(int i=mx-1;i>=0;--i){
        qs[i]+=qs[i+1];
    }
    for(int i=1;i<=m;++i){
        long long res=0;
        for(int j=i;j<=mx;j+=i){
            res+=qs[j];
        }
        cout<<res<<"\n";
    }
    return 0;
}