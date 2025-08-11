#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int m,n;
ll x[100],y[100];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m;++i){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;++i){
        ll xi,yi,r;
        cin>>xi>>yi>>r;
        int cnt=0;
        for(int j=0;j<m;++j){
            if((xi-x[j])*(xi-x[j])+(yi-y[j])*(yi-y[j])<r*r)++cnt;
        }
        if(cnt<m and cnt!=0)++res;
    }
    cout<<res;
    return 0;
}