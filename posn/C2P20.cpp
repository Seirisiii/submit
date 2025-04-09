#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
int m;
map<ll,ll,greater<ll>> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        ll p,c;
        cin>>p>>c;
        mp[p]=c;
    }
    cin>>m;
    for(int i=0;i<m;++i){
        ll p,c;
        cin>>p>>c;
        mp[p]+=c;
    }
    bool ch=false;
    for(auto i:mp){
        if(i.second==0)continue;
        cout<<i.first<<" "<<i.second<<"\n";
        ch=true;
    }
    if(!ch)cout<<0;
    return 0;
}
