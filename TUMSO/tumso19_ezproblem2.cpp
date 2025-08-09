#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int MOD=1e9+7;
int TC;
void runcase(){
    ll x;
    cin>>x;
    if(x==1 or x==2)cout<<"NO\n";
    else cout<<(x-3)%MOD<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}