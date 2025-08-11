#include<bits/stdc++.h>
using namespace std;
double a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if(c-(a+b)>-1e-10 and c-(a+b)<1e-10)cout<<"Correct";
    else cout<<"Wrong";
    return 0;
}