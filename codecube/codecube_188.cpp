#include<bits/stdc++.h>
using namespace std;
int n,q;
unordered_map<int,vector<int>> m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        m[x].emplace_back(i+1);
    }
    for(int i=0;i<q;++i){
        int l,r,c;
        cin>>l>>r>>c;
        if(m.find(c)==m.end())cout<<"0\n";
        else{
            auto left=lower_bound(m[c].begin(),m[c].end(),l);
            auto right=upper_bound(m[c].begin(),m[c].end(),r);
            cout<<right-left<<"\n";
        }
    }
    return 0;    
}