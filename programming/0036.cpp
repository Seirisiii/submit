#include<bits/stdc++.h>
using namespace std;
int n;
long long sentinel=1,scourge=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n%2!=0)++n;
    for(int i=n;i>n/2;--i){
        sentinel*=i;
    }
    for(int i=1;i<=n/2;++i){
        scourge*=i;
    }
    cout<<sentinel/scourge;
    return 0;
}