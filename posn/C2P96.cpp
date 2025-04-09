#include<bits/stdc++.h>
using namespace std;
using ll=int;
int n;
ll arr[500005];
map<ll,ll> mp;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        ++mp[arr[i]];
    }
    ll val;
    cin>>val;
    for(int i=0;i<n;++i){
        if(val-arr[i]==arr[i])--res;
        res+=mp[val-arr[i]];
    }
    cout<<res/2;
    return 0;
}