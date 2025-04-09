#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=5005;
int n;
ll a[N];
ll b[N];
ll res[10005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n;++i){
        cin>>b[i];
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            res[i+j]+=a[i]*b[j];
        }
    }
    for(int i=0;i<2*n-1;++i){
        cout<<res[i]<<"\n";
    }
    return 0;
}