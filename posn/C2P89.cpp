#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
const int MAX=5e3+5;
ll dp[MAX];
ll pos[MAX];
ll tree[MAX];
void init(int size){
    for(int i=0;i<=size+1;++i)tree[i]=0;
    return ;
}
void update(int v,ll val){
    for(;v<MAX;v+=v&-v)tree[v]+=val;
    return ;
}
ll query(int v){
    ll res=0;
    for(;v>0;v-=v&-v)res+=tree[v];
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        int x;
        cin>>x;
        pos[x]=i;
        dp[i]=1e18;
    }
    for(int i=1;i<=n;++i){
        ll cost=0;
        for(int j=i;j<=n;++j){
            cost+=pos[j]-i-((j-i)-query(pos[j]));
            dp[j]=min(dp[j],dp[i-1]+cost);
            update(pos[j],1);
        }
        init(n+1);
        for(int j=i+1;j<=n;++j){
            if(pos[j]<pos[i])++pos[j];
        }
    }
    cout<<dp[n]<<"\n";
    return 0;
}
