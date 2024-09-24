#include<bits/stdc++.h>
using namespace std;
int arr[4];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
    sort(arr,arr+4);
    cout<<arr[0]*arr[2];
    return 0;
}