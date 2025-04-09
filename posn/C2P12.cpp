#include<bits/stdc++.h>
using namespace std;
int n,m,c;
set<int> a,res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>c;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        a.emplace(x);
    }
    if(c==0){
        for(int i=0;i<m;++i){
           int x;
           cin>>x;
           a.emplace(x);
        }
        for(auto i:a){
            cout<<i<<" ";
        }
    }
    else if(c==1){
        for(int i=0;i<m;++i){
            int x;
            cin>>x;
            if(a.find(x)!=a.end())res.emplace(x);
        }
        for(auto i:res){
            cout<<i<<" ";
        }
    }
    else if(c==2){
        for(int i=0;i<m;++i){
            int x;
            cin>>x;
            if(a.find(x)!=a.end())a.erase(x);
        }
        for(auto i:a){
            cout<<i<<" ";
        }
    }
    return 0;
}