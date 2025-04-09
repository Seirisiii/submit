#include<bits/stdc++.h>
using namespace std;
const int N=50;
int n;
int sum;
int arr[N];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        sum+=arr[i];
    }
    int di=sum/n;
    for(int i=0;i<n;++i){
        if(arr[i]>di)res+=arr[i]-di;
    }
    cout<<res;
    return 0;
}