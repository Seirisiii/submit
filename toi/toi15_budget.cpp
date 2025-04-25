#include<bits/stdc++.h>
using namespace std;
int b,e;
int p;
vector<tuple<int,int,int,int>> ve;
vector<pair<int,int>> vp;
int parent[3005];
priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;
int cost;
bool comparebudget(tuple<int,int,int,int> a,tuple<int,int,int,int> b){
    return get<2>(a)<get<2>(b);
}
bool comparepackage(pair<int,int> a,pair<int,int> b){
    if(a.second!=b.second)return a.second<b.second;
    return a.first>b.first;
}
int find_parent(int i){
    if(parent[i]==i)return i;
    return parent[i]=find_parent(parent[i]);
}
void union_parent(int u,int v){
    parent[v]=u;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>b>>e;
    for(int i=0;i<b;++i){
        parent[i]=i;
    }
    for(int i=0;i<e;++i){
        int s,t,l,r;
        cin>>s>>t>>l>>r;
        ve.emplace_back(s,t,l,r);
    }
    sort(ve.begin(),ve.end(),comparebudget);
    cin>>p;
    for(int i=0;i<p;++i){
        int l,price;
        cin>>l>>price;
        vp.emplace_back(l,price);
    }
    sort(vp.begin(),vp.end(),comparepackage);
    for(auto [s,t,l,r]:ve){
        if(r==1)pq.emplace(0,s,t);
        else{
            for(auto [lp,price]:vp){
                if(l<=lp){
                    pq.emplace(price,s,t);
                    break;
                }
            }
        }
    }
    while(!pq.empty()){
        auto [price,s,t]=pq.top();
        pq.pop();
        int u=find_parent(s);
        int v=find_parent(t);
        if(u==v)continue;
        union_parent(u,v);
        cost+=price;
    }
    cout<<cost;
    return 0;
}