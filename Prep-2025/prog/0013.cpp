#include<bits/stdc++.h>
using namespace std;
int arr[9];
int s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<9;++i){
        cin>>arr[i];
        s+=arr[i];
    }
    for(int i=0;i<9;++i){
        for(int j=i+1;j<9;++j){
            if(s-arr[i]-arr[j]==100){
                for(int k=0;k<9;++k){
                    if(k==i or k==j)continue;
                    cout<<arr[k]<<"\n";
                }
                return 0;
            }
        }
    }
    return 0;
}