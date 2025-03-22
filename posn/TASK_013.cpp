#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int t;
void solve(){
    ll n,k,c,p;
    cin>>n>>k>>c>>p;
    for(ll i=1;i<=n/p;++i){
        if((c*i)%k==0){
            cout<<"Yes\n";
            return ;
        }
    }
    cout<<"No\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    while(t--)solve();
    return 0;
}