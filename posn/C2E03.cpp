#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int TC;
void runcase(){
    ll res=0;
    int n;
    cin>>n;
    multiset<ll> ms;
    for(int i=0;i<n;++i){
        int k;
        cin>>k;
        for(int j=0;j<k;++j){
            ll x;
            cin>>x;
            ms.emplace(x);
        }
        int s1=*(ms.begin());
        int s2=*(prev(ms.end()));
        res+=s2-s1;
        ms.erase(ms.begin());
        ms.erase(prev(ms.end()));
    }
    cout<<res<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}