#include<bits/stdc++.h>
using namespace std;
const int N=5e4+5;
int n;
int arr[N];
int s1[N];
int s2[N];
int s,e,sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    arr[0]=2e9;
    arr[n+1]=-1;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    s=0;
    e=0;
    sum=0;
    for(int i=0;i<=n+1;++i){
        if(arr[i]<arr[s]){
            s=i;
            e=i;
            sum=0;
        }
        else if(arr[i]>arr[e]){
            sum+=arr[i]-arr[e];
            e=i;
        }
        s1[i]=sum;
    }
    s=n+1;
    e=n+1;
    sum=0;
    for(int i=n+1;i>=0;--i){
        if(arr[i]>arr[s]){
            s=i;
            e=i;
            sum=0;
        }
        else if(arr[i]<arr[e]){
            sum+=arr[e]-arr[i];
            e=i;
        }
        s2[i]=sum;
    }
    int mx=0;
    for(int i=0;i<=n+1;++i){
        mx=max(mx,s1[i]+s2[i]);
    }
    cout<<mx;
    return 0;
}