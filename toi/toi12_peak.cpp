#include<bits/stdc++.h>
using namespace std;
int n;
int k;
vector<int> v;
int l,m,r;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>k;
    cin>>m;
    for(int i=1;i<n;++i){
        cin>>r;
        if(m>l and m>r)v.emplace_back(m);
        l=m;
        m=r;
    }
    if(l<m)v.emplace_back(m);
    sort(v.begin(),v.end());
    v.resize(unique(v.begin(),v.end())-v.begin());
    if(v.empty()){
        cout<<-1;
        return 0;
    }
    else{
        if(v.size()<k){
            for(int i=0;i<v.size();++i){
                cout<<v[i]<<"\n";
            }
        }
        else{
            for(int i=v.size()-1;i>=0 and k--;--i){
                cout<<v[i]<<"\n";
            }
        }
    }
    return 0;
}