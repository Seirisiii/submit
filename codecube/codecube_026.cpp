#include<bits/stdc++.h>
using namespace std;
int n;
int qs[1000001];
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int a,b;
        cin>>a>>b;
        ++qs[a];
        --qs[b];
    }
    for(int i=1;i<=1000000;++i){
        qs[i]+=qs[i-1];
        mx=max(mx,qs[i]);
    }
    cout<<mx;
    return 0;
}