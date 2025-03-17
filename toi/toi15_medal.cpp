#include<bits/stdc++.h>
using namespace std;
const int N=5e5;
int n;
int t[N];
int h[N];
int arr[N];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>t[i];
    }
    for(int i=0;i<n;++i){
        cin>>h[i];
    }
    sort(t,t+n);
    sort(h,h+n,greater<int>());
    for(int i=0;i<n;++i){
        arr[i]=t[i]+h[i];
    }
    sort(arr,arr+n);
    for(int i=1;i<n;++i){
        res+=arr[i]-arr[i-1];
    }
    cout<<res;
    return 0;
}