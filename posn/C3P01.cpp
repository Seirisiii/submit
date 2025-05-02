#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[100001];
int darr[100001];
int qs[100001];
int sq;
int query(int l,int r){
    int res=arr[l];
    while(l<r and l%sq!=0 and l!=0){
        res=max(res,arr[l]);
        l++;
    }
    while(l+sq<=r){
        res=max(res,darr[l/sq]);
        l+=sq;
    }
    while(l<=r){
        res=max(res,arr[l]);
        l++;
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    sq=sqrt(n);
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n;++i){
        cin>>qs[i];
        qs[i]+=i==0?0:qs[i-1];
    }
    int idx=0;
    for(int i=0;i<n;i+=sq){
        int mx=0;
        for(int j=i;j<min(i+sq,n);++j){
            mx=max(mx,arr[j]);
        }
        darr[idx++]=mx;
    }
    while(m--){
        int s,t;
        cin>>s>>t;
        cout<<query(s,t)<<" "<<qs[t]-(s==0?0:qs[s-1])<<"\n";
    }
    return 0;
}