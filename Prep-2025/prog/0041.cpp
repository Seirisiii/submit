#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<fixed<<setprecision(6);
    if(n==1)cout<<2.0;
    else if(n==3)cout<<2+sqrt(3);
    else if(n%2==0)cout<<n*1.0;
    else cout<<n-3+2*sqrt(3);
    return 0;
}