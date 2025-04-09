#include<bits/stdc++.h>
using namespace std;
const int N=1e4+5;
int n;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    vector<int> v(n);
    for(auto &i:v){
        cin>>i;
    }
    vector<int> res;
    for(int i=0;i<n;++i){
        auto it=lower_bound(res.begin(),res.end(),v[i]);
        if(it==res.end())res.emplace_back(v[i]);
        else *it=v[i];
    }
    cout<<res.size();
    return 0;
}