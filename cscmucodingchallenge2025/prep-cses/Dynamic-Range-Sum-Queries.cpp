#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,q;
ll arr[200005];
ll tree[200005];
void update(int k,ll val){
    while(k<=n){
        tree[k]+=val;
        k+=k&-k;
    }
    return ;
}
ll query(int k){
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
        update(i,arr[i]);
    }
    while(q--){
        int x;
        cin>>x;
        if(x==1){
            int k,u;
            cin>>k>>u;
            int diff=u-arr[k];
            arr[k]=u;
            update(k,diff);
        }
        else if(x==2){
            int l,r;
            cin>>l>>r;
            cout<<query(r)-query(l-1)<<"\n";
        }
    }
    return 0;
}