#include<bits/stdc++.h>
using namespace std;
const int N=20;
typedef long long ll;
int n;
ll w;
ll c[N];
ll solve(int i,int w){
    if(i==1)return w;
    int W=w*2-c[i-1]+1;
    return solve(i-1,W/2)+solve(i-1,W-W/2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>w;
    for(int i=1;i<n;++i){
        cin>>c[i];
    }
    ll res=solve(n,w);
    if(res<=0)cout<<-1;
    else cout<<res;
    return 0;
}