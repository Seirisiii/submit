#include<bits/stdc++.h>
using namespace std;
int n;
int arr[32767];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;--i){
        cout<<arr[i]<<" ";
    }
    return 0;
}
