#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
using ll=long long;
int n,q;
ll arr[N];
ll tree[N];
void add(int k,ll u){
    while(k<=n){
        tree[k]+=u;
        k+=k&-k;
    }
    return ;
}
ll sum(int k){
    ll sum=0;
    while(k>=1){
        sum+=tree[k];
        k-=k&-k;
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
        add(i,arr[i]);
    }
    while(q--){
        int x;
        cin>>x;
        if(x==1){
            int k;
            ll u;
            cin>>k>>u;
            ll a=u-arr[k];
            arr[k]=u;
            add(k,a);
        }
        else if(x==2){
            int a,b;
            cin>>a>>b;
            cout<<sum(b)-sum(a-1)<<"\n";
        }
    }
    return 0;
}