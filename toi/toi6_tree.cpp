#include<bits/stdc++.h>
using namespace std;
void solve(){
    set<pair<int,int>> t1,t2;
    int n;
    cin>>n;
    for(int i=0;i<n-1;++i){
        int u,v;
        cin>>u>>v;
        if(u>v)swap(u,v);
        t1.insert({u,v});
    }
    for(int i=0;i<n-1;++i){
        int u,v;
        cin>>u>>v;
        if(u>v)swap(u,v);
        t2.insert({u,v});
    }
    if(t1==t2)cout<<"Y";
    else cout<<"N";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=5;
    while(t--)solve();
    return 0;
}