#include<bits/stdc++.h>
using namespace std;
int t=5;
bool compare(tuple<int,int,int> a,tuple<int,int,int> b){
    if(get<0>(a)!=get<0>(b))return get<0>(a)>get<0>(b);
    return get<1>(a)<get<1>(b);
}
void solve(){
    int n,c;
    map<int,pair<int,int>> mp;
    vector<tuple<int,int,int>> v;
    cin>>n>>c;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        if(mp.find(x)==mp.end())mp[x]={1,i};
        else ++mp[x].first;
    }
    for(auto i:mp){
        int x=i.first;
        int cnt=i.second.first;
        int idx=i.second.second;
        v.emplace_back(cnt,idx,x);
    }
    sort(v.begin(),v.end(),compare);
    for(auto [cnt,i,x]:v){
        for(int k=0;k<cnt;++k){
            cout<<x<<" ";
        }
    }
    cout<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(t--)solve();
    return 0;
}