#include<bits/stdc++.h>
using namespace std;
int n,k;
int arr[30000];
int qs[90001];
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        ++qs[arr[i]];
    }
    for(int i=1;i<=90000;++i){
        qs[i]+=qs[i-1];
    }
    for(int i=0;i<n;++i){
        mx=max(mx,qs[arr[i]+k]-qs[arr[i]]);
    }
    cout<<mx;
    return 0;
}