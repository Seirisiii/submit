#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=1e6+5;
int n,t;
ll qs[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>t;
    for(int i=1;i<=n;++i){
        cin>>qs[i];
    }
    while(t--){
        int l,r;
        ll v;
        cin>>l>>r>>v;
        qs[l]+=v;
        qs[r+1]-=v;
    }
    for(int i=1;i<=n;++i){
        qs[i]+=qs[i-1];
        cout<<qs[i]<<" ";
    }
    return 0;
}