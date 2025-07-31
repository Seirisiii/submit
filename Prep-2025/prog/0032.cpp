#include<bits/stdc++.h>
using namespace std;
int n;
int arr[1005];
int zero;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]==0)++zero;
    }
    sort(arr,arr+n);
    cout<<arr[zero];
    for(int i=0;i<zero;++i){
        cout<<arr[i];
    }
    for(int i=zero+1;i<n;++i){
        cout<<arr[i];
    }
    return 0;
}