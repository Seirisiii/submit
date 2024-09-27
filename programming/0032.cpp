#include<bits/stdc++.h>
using namespace std;
int n;
int arr[1000];
string s;
bool check;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;++i){
        if(arr[i]==0 and !check){
            s+='0';
            continue;
        }
        else if(!check){
            cout<<arr[i]<<s;
            check=true;
        }
        else cout<<arr[i];
        
    }
    return 0;
}