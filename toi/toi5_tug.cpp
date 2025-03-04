#include<bits/stdc++.h>
using namespace std;
int n;
int a[2000];
int b[2000];
long long res;
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
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;++i){
        res+=abs(a[i]-b[i]);
    }
    cout<<res;
    return 0;
}