#include<bits/stdc++.h>
using namespace std;
void solve(){
    int m,n;
    cin>>m>>n;
    if(2*n>m){
        cout<<"0\n";
        return ;
    }
    int res=n-(m-2*n)/2+1;
    if(res<=0)cout<<"0\n";
    else cout<<res<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=20;
    while(t--){
        solve();
    }
    return 0;
}