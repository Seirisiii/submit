#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+1;
int n;
tuple<ll,ll,ll,ll> t[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        ll x,y;
        cin>>x>>y;
        t[i]={x*x+y*y,i,x,y};
    }
    sort(t,t+n);
    for(int i=0;i<n;++i){
        auto [d,j,x,y]=t[i];
        cout<<"("<<x<<", "<<y<<")\n";
    }
    return 0;
}