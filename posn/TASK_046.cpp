#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+5;
int n;
ll x[N];
ll y[N];
ll sum;
ll res;
ll s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x[i];
    }
    for(int i=1;i<=n;++i){
        cin>>y[i];
        sum+=y[i];
    }
    for(int i=1;i<=n;++i){
        res+=((n-1)*x[i]*y[i]-x[i]*(sum-y[i]));
        res%=2560;
    }
    for(int i=1;i<n;++i){
        s+=i;
        s%2560;
    }
    cout<<s%2560<<"\n"<<res%2560;
    return 0;
}