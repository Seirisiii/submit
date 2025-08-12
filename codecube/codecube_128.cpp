#include<bits/stdc++.h>
using namespace std;
int n;
int l[1000005];
int r[1000005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>l[i];
    }
    for(int i=n-1;i>=0;--i){
        r[i]=max(r[i+1],l[i]);
    }
    for(int i=1;i<n;++i){
        l[i]=max(l[i],l[i-1]);
    }
    for(int i=0;i<n-1;++i){
        cout<<min(l[i],r[i+1])<<" ";
    }
    return 0;
}