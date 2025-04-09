#include<bits/stdc++.h>
using namespace std;
const int MAX=5e3+5;
int C,N;
int ti[MAX];
int dish[MAX];
vector<tuple<int,int,int,int>> v;
map<pair<int,int>,int> mp;
set<tuple<int,int,int>> s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>C>>N;
    for(int i=0;i<N;++i){
        int c,d,t,r;
        cin>>c>>d>>t>>r;
        v.emplace_back(t,r,d,c);
    }
    sort(v.begin(),v.end());
    for(auto i:v){
        auto [t,r,d,c]=i;
        if(mp[{c,d}]==-1)continue;
        if(r==0)++mp[{c,d}];
        else if(r==1){
            ti[c]+=t+1200*mp[{c,d}];
            mp[{c,d}]=-1;
            ++dish[c];
        }
    }
    for(int i=1;i<=C;++i){
        s.emplace(-dish[i],ti[i],i);
    }
    for(auto i:s){
        cout<<get<2>(i)<<" ";
    }
    return 0;
}