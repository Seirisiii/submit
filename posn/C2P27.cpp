#include<bits/stdc++.h>
using namespace std;
const int N=3005;
int n,k;
priority_queue<tuple<int,string,int>,vector<tuple<int,string,int>>,greater<tuple<int,string,int>>> pq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    string s;
    int x;
    for(int i=0;i<n;++i){
        cin>>s>>x;
        pq.emplace(x,s,x);
    }
    while(k--){
        auto [x,s,xi]=pq.top();
        cout<<x<<" "<<s<<"\n";
        pq.pop();
        pq.emplace(x+xi,s,xi);
    }
    return 0;
}