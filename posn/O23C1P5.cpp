#include<bits/stdc++.h>
using namespace std;
int n;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int I=0;I<n;++I){
        int k;
        cin>>k;
        int arr[k]={};
        int cnt=0;
        for(int i=0;i<k;++i){
            cin>>arr[i];
        }
        for(int i=0;i<k-1;++i){
            for(int j=0;j<k-i-1;++j){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    ++cnt;
                }
            }
        }
        cout<<cnt<<"\n";
        res+=cnt;
    }
    cout<<res;
    return 0;
}