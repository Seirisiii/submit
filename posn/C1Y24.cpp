#include<bits/stdc++.h>
using namespace std;
int a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    cout<<__gcd(a,b)<<" "<<a*b/__gcd(a,b);
    return 0;
}
