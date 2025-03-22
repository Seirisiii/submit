#include<bits/stdc++.h>
using namespace std;
int a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a;
    cout<<fixed<<setprecision(2)<<a*sqrt(a*M_PI)/6.0/M_PI;
    return 0;
}