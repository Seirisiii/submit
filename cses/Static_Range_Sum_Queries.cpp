#include<bits/stdc++.h>
using namespace std;
const int N=2e5+5;
using ll=long long;
int n,q;
ll qs[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    for(int i=1;i<=n;++i){
        cin>>qs[i];
        qs[i]+=qs[i-1];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<qs[r]-qs[l-1]<<"\n";
    }
    return 0;
}