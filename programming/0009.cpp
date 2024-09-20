#include<bits/stdc++.h>
using namespace std;
int arr[3];
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    cin>>s;
    for(auto i:s){
        cout<<arr[i-'A']<<" ";
    }
    return 0;
}