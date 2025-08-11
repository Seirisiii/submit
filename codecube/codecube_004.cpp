#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
ll arr[100000];
ll d;
ll res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(i==0)d=arr[i];
        else d=__gcd(d,arr[i]);
    }
    for(int i=0;i<n;++i){
        res+=arr[i]/d;
    }
    cout<<res;
    return 0;
}