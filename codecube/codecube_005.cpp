#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
ll arr[100000];
ll res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(i==0)res=arr[i];
        else res=res*arr[i]/__gcd(res,arr[i]);
    }
    cout<<res;
    return 0;
}