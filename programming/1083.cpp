#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int arr[1000005];
int prefix[1000005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    for(int i=1;i<=n;++i){
        prefix[i]=prefix[i-1]+max(0,arr[i]-arr[i-1]);
    }
    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<prefix[r]-prefix[l]<<"\n";
    }
    return 0;
}