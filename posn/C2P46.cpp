#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int n;
int m;
int qs[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>qs[i];
        if(i>0)qs[i]+=qs[i-1];
    }
    while(m--){
        int l,r;
        cin>>l>>r;
        if(l-1<0)cout<<qs[r]<<"\n";
        else cout<<qs[r]-qs[l-1]<<"\n";
    }
    return 0;
}