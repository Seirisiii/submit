#include<bits/stdc++.h>
using namespace std;
int n;
int arr[32767];
int x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    cin>>x;
    bool check=true;
    for(int i=0;i<n;++i){
        if(arr[i]==x){
            cout<<i+1<<" ";
            check=false;
        }
    }
    if(check)cout<<0;
    return 0;
}
