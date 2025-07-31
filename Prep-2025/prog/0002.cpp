#include<bits/stdc++.h>
using namespace std;
int n;
int mx=INT_MIN;
int mn=INT_MAX;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        mx=max(mx,x);
        mn=min(mn,x);
    }
    cout<<mn<<"\n"<<mx;
    return 0;
}