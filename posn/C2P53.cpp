#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int n;
int arr[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int res=0;
    if(n==1){
        cout<<0;
        return 0;
    }
    for(int i=0;i<n;++i){
        if(i==0 and arr[i]>arr[i+1])res=i;
        else if(i==n-1 and arr[i]>arr[i-1])res=i;
        else if(arr[i]>arr[i-1] and arr[i]>arr[i+1])res=i;
    }
    cout<<res;
    return 0;
}