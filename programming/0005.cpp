#include<bits/stdc++.h>
using namespace std;
double base,height;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>base>>height;
    cout<<fixed<<setprecision(6)<<sqrt(base*base+height*height);
    return 0;
}