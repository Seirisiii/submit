#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,q;
long long qs[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    for(int i=1;i<=n;++i){
        cin>>qs[i];
    }
    sort(qs+1,qs+n+1);
    for(int i=1;i<=n;++i){
        qs[i]+=qs[i-1];
    }
    while(q--){
        long long b;
        cin>>b;
        int res=upper_bound(qs+1,qs+n+1,b)-qs;
        cout<<res-1<<"\n";
    }
    return 0;
}