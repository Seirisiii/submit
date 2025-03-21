#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
int n,q;
int arr[N];
int dcom[N];
int dsize;
int idx=-1;
int query(int l,int r){
    int res=arr[l];
    while(l<r and l%dsize!=0 and l!=0){
        res=min(res,arr[l]);
        ++l;
    }
    while(l+dsize<=r){
        res=min(res,dcom[l/dsize]);
        l+=dsize;
    }
    while(l<=r){
        res=min(res,arr[l]);
        ++l;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    dsize=sqrt(n);
    for(int i=0;i<n;++i){
        if(i%dsize==0){
            ++idx;
            dcom[idx]=arr[i];
        }
        else if(dcom[idx]>arr[i])dcom[idx]=arr[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        --l,--r;
        cout<<query(l,r)<<"\n";
    }
    return 0;
}