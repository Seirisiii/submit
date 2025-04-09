#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int TC;
ll solve(ll n){
    ll digit=1;
    ll base=9;
    while(n-digit*base>0){
        n-=digit*base;
        ++digit;
        base*=10;
    }
    ll idx=n%digit;
    ll pw1=1;
    for(int i=1;i<digit;++i){
        pw1*=10;
    }
    ll res=pw1+(n-1)/digit;
    if(idx!=0){
        ll pw2=1;
        for(int i=1;i<=digit-idx;++i){
            pw2*=10;
        }
        res/=pw2;
    }
    return res%10;
}
void runcase(){
    ll n;
    cin>>n;
    --n;
    cout<<solve(n)<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}