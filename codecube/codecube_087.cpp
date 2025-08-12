#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
ll m;
unordered_map<ll,ll> mp;
ll res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    while(n--){
        int x;
        cin>>x;
        res+=mp[m-x];
        ++mp[x];
    }
    cout<<res;
    return 0;
}