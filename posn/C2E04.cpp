#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=105;
int n,m;
ll arr[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    ll res=arr[n-1]-arr[0];
    for(int i=0;i<n-1;++i){
        pq.emplace(arr[i]-arr[i+1]);
    }  
    while(--m){
        res+=pq.top();
        pq.pop();
    }
    cout<<res;
    return 0;
}