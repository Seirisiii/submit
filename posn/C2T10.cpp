#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e5+5;
const int M=2e5+5;
int n,m;
ll power[N];
vector<pair<int,int>> v,vec;
int k;
bool no[M];
int parent[N];
stack<tuple<int,ll,ll>> stk;
multiset<ll> ms;
int find_parent(int i){
    if(parent[i]==i)return i;
    return parent[i]=find_parent(parent[i]);
}
void union_parent(int u,int v){
    u=find_parent(u);
    v=find_parent(v);
    if(u==v)return ;
    ms.erase(ms.find(power[u]));
    ms.erase(ms.find(power[v]));
    power[u]+=power[v];
    power[v]=0;
    parent[v]=u;
    ms.insert(power[u]);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        cin>>power[i];
        ms.insert(power[i]);
        parent[i]=i;
    }
    for(int i=0;i<m;++i){
        int x,y;
        cin>>x>>y;
        v.emplace_back(x,y);
    }
    cin>>k;
    for(int i=0;i<k;++i){
        int x;
        cin>>x;
        --x;
        no[x]=true;
        vec.emplace_back(v[x].first,v[x].second);
    }
    for(int i=0;i<m;++i){
        if(no[i])continue;
        union_parent(v[i].first,v[i].second);
    }
    reverse(vec.begin(),vec.end());
    for(int i=0;i<k;++i){
        int res=ms.size();
        ll mn=*ms.begin();
        ll mx=*ms.rbegin();
        stk.emplace(res,mx,mn);
        union_parent(vec[i].first,vec[i].second);
    }
    while(!stk.empty()){
        auto [i,mx,mn]=stk.top();
        cout<<i<<" "<<mx<<" "<<mn<<"\n";
        stk.pop();
    }
    return 0;
}