#include<bits/stdc++.h>
using namespace std;
int n;
int arr[10001];
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        ++arr[x];
        mx=max(mx,arr[x]);
    }
    for(int i=1;i<=10000;++i){
        if(arr[i]==mx)cout<<i<<" ";
    }
    return 0;
}