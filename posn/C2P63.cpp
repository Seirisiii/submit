#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int TC;
void runcase(){
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    ll res=0;
    for(int i=0;i<n;++i){
        ll x;
        cin>>x;
        pq.emplace(x);
    }
    while(pq.size()>1){
        ll x1=pq.top();
        pq.pop();
        ll x2=pq.top();
        pq.pop();
        res+=x1+x2;
        pq.emplace(x1+x2);
    }
    cout<<res<<"\n";;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC>>n;
    while(TC--)runcase();
    return 0;
}