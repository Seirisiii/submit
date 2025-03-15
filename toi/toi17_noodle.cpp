#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=1e5+5;
int n,m,k;
ll arr[N];
ll res;
ll solve(ll mid){
    ll s=0;
    ll cnt=0;
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    for(int i=0;i<n;++i){
        if(pq.size()<k){
            pq.emplace(arr[i]);
            s+=arr[i];
        }
        else if(!pq.empty()){
            if(pq.top()<arr[i]){
                s-=pq.top();
                pq.pop();
                s+=arr[i];
                pq.emplace(arr[i]);
            }
        }
        if(s>=mid and pq.size()==k){
            ++cnt;
            s=0;
            while(!pq.empty())pq.pop(); 
        }
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    ll l=2e9,r=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        l=min(l,arr[i]);
        r+=arr[i];
    }
    while(l<=r){
        ll mid=(l+r)/2;
        ll x=solve(mid);
        if(x>=m){
            l=mid+1;
            res=mid;
        }
        else r=mid-1;
    }
    cout<<res;
    return 0;
}