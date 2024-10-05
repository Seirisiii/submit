#include<bits/stdc++.h>
using namespace std;
long long a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if(a<b)swap(a,b);
    if(b<c)swap(b,c);
    if(a<b)swap(a,b);
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
