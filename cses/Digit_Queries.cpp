#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int q;
ll digit(ll k){
    ll d=1;
    ll n=9;
    while(k-n*d>0){
        k-=n*d;
        ++d;
        n*=10;
    }
    ll idx=k%d;
    ll pw1=1;
    for(int i=1;i<=d-1;++i){
        pw1*=10;
    }
    ll res=pw1+(k-1)/d;
    if(idx!=0){
        ll pw2=1;
        for(int i=1;i<=d-idx;++i){
            pw2*=10;
        }
        res/=pw2;
    }
    return res%10;
}
void solve(){
    ll k;
    cin>>k;
    cout<<digit(k)<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>q;
    while(q--)solve();
    return 0;
}