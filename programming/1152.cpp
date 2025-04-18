#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v[2005];
priority_queue<int> pq;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            int x;
            cin>>x;
            v[i+j].emplace_back(x);
        }
    }
    for(int i=2*n-2;i>=1;--i){
        for(auto j:v[i])pq.emplace(j);
        res+=pq.top();
        pq.pop();
    }
    cout<<res;
    return 0;
}