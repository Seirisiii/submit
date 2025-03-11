#include<bits/stdc++.h>
using namespace std;
const int N=5e5;
int n,k;
int p[N];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>k;
    for(int i=0;i<n;++i){
        cin>>p[i];
    }
    pq.emplace(p[0],0);
    for(int i=1;i<n;++i){
        while(!pq.empty() and i-pq.top().second>k){
            pq.pop();
        }
        pq.emplace(p[i]+pq.top().first,i);
    }
    while(!pq.empty() and pq.top().second!=n-1){
        pq.pop();
    }
    cout<<pq.top().first;
    return 0;
}