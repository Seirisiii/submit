#include<bits/stdc++.h>
using namespace std;
int arr[4];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<4;++i){
        cin>>arr[i];
    }
    sort(arr,arr+4);
    cout<<arr[0]*arr[2];
    return 0;
}