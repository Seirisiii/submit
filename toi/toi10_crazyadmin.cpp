#include<bits/stdc++.h>
using namespace std;
const int O=100;
int m,o;
int arr[O];
int sum;
int mx;
int res;
bool solve(int mid){
    int cnt=1;
    int s=0;
    for(int i=0;i<o;++i){
        if(s+arr[i]<=mid)s+=arr[i];
        else{
            s=arr[i];
            ++cnt;
        }
    }
    return cnt<=m;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>o;
    for(int i=0;i<o;++i){
        cin>>arr[i];
        sum+=arr[i];
        mx=max(mx,arr[i]);
    }
    int l=mx,r=sum;
    while(l<=r){
        int mid=(l+r)/2;
        if(solve(mid)){
            res=mid;
            r=mid-1;
        }
        else l=mid+1;
    }
    cout<<res;
    return 0;
}