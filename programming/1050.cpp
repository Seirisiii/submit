#include<bits/stdc++.h>
using namespace std;
int n,p;
map<vector<int>,int> m;
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>p;
    for(int i=0;i<n;++i){
        vector<int> vec;
        for(int j=0;j<p;++j){
            int x;
            cin>>x;
            vec.emplace_back(x);
        }
        m[vec]=i+1;
    }
    for(int i=0;i<p;++i){
        int x;
        cin>>x;
        v.emplace_back(x);
    }
    if(m.find(v)!=m.end()){
        cout<<m[v];
        return 0;
    }
    for(auto i:m){
        vector<int> vec;
        for(int j=0;j<p;++j){
            vec.emplace_back(v[j]-i.first[j]);
        }
        if(m.find(vec)!=m.end() and vec!=i.first){
            if(m[vec]<i.second)cout<<m[vec]<<" "<<i.second;
            else cout<<i.second<<" "<<m[vec];
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}