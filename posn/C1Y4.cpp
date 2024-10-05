#include<bits/stdc++.h>
using namespace std;
int a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a;
    if(a<0 or a>100)cout<<"Error";
    else if(a>=80)cout<<"A";
    else if(a>=70)cout<<"B";
    else if(a>=60)cout<<"C";
    else if(a>=50)cout<<"D";
    else cout<<"F";
    return 0;
}
