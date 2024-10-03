#include<bits/stdc++.h>
using namespace std;
int n;
int arr[256];
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int l,h,r;
        cin>>l>>h>>r;
        mx=max(mx,r);
        for(int j=l;j<r;++j){
            arr[j]=max(arr[j],h);
        }
    }
    for(int i=1;i<=mx;++i){
        if(arr[i]!=arr[i-1])cout<<i<<" "<<arr[i]<<" ";
    }
    return 0;
}