#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n,h,w;
ll a[100005];
ll b[100005];
ll sa,sb;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>h>>w;
    for(int i=1;i<=n;++i){
        cin>>a[i];
        a[i]+=a[i-1];
    }
    for(int i=1;i<=n;++i){
        cin>>b[i];
        b[i]+=b[i-1];
    }
    for(int i=h;i<=n;++i){
        sa=max(sa,a[i]-a[i-h]);
    }
    for(int i=w;i<=n;++i){
        sb=max(sb,b[i]-b[i-w]);
    }
    cout<<sa*w+sb*h;
    return 0;
}