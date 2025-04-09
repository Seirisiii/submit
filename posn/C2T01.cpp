#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e7+1;
int n;
ll arr[N];
ll sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;++i){
        sum+=arr[i];
    }
    if(arr[n-1]>sum)cout<<arr[n-1]*2;
    else cout<<sum+arr[n-1];
    return 0;
}