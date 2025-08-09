#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const ll MOD=1e9+7;
ll x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x;
    x%=MOD;
    cout<<((x*x)%MOD*x)%MOD;
    return 0;
}