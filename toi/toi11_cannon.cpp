#include<bits/stdc++.h>
using namespace std;
int n,m,k,l;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k>>l;
    vector<int> v(n);
    for(auto &i:v){
        cin>>i;
    }
    while(k--){
        int res=0;
        auto mx=v.begin();
        for(int i=0;i<m;++i){
            int x;
            cin>>x;
            auto it1=upper_bound(mx,v.end(),x+l);
            auto it2=lower_bound(mx,v.end(),x-l);
            res+=it1-it2;
            mx=it1;
        }
        cout<<res<<"\n";
    }
    return 0;
}