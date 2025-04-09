#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+5;
int n,m,k;
ll d[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k;
    for(int i=1;i<=n;++i){
        cin>>d[i];
    }
    map<int,ll> mp;
    for(int i=0;i<m;++i){
        int x;
        ll l;
        cin>>x>>l;
        mp[x]=l;
    }
    int res=0;
    ll sum=0;
    priority_queue<ll> pq;
    for(int i=1;i<=n;++i){
        if(sum+d[i]>k){
            if(!pq.empty() and d[i]<pq.top()){
                if(sum-pq.top()+d[i]<=k){
                    sum-=pq.top();
                    pq.pop();
                    sum+=d[i];
                    pq.push(d[i]);
                }
            }
        }
        else{
            sum+=d[i];
            pq.push(d[i]);
            ++res;
        }
        if(mp.find(i)!=mp.end())k=mp[i];
        while(!pq.empty() and sum>k){
            sum-=pq.top();
            pq.pop();
            --res;
        }
        if(sum>k)break;
    }
    cout<<res;
    return 0;
}