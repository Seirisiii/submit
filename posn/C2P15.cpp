#include<bits/stdc++.h>
using namespace std;
int p,q;
vector<int> v;
void solve(){
    queue<int> q;
    int x;
    cin>>x;
    for(int i=0;i<p-x;++i){
        q.emplace(v.back());
        v.pop_back();
    }
    while(!q.empty()){
        v.emplace_back(q.front());
        q.pop();
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>p>>q;
    for(int i=0;i<p;++i){
        int x;
        cin>>x;
        v.emplace_back(x);
    }
    while(q--)solve();
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}