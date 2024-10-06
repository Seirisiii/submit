#include<bits/stdc++.h>
using namespace std;
long long n,arr[1000];
int L,R;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int l=0,r=n-1;
    long long mx=min(arr[0],arr[n-1])*(n-1);
    while(l<r){
        if(arr[l]<arr[r])++l;
        else if(arr[l]>=arr[r])--r;
        long long area=min(arr[l],arr[r])*(r-l);
        if(mx<area){
            L=l;
            R=r;
            mx=area;
        }
    }
    cout<<L<<" "<<R<<"\n"<<mx;
    return 0;
}