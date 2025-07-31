#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    int sum=a+b+c;
    if(sum>=80)cout<<"A";
    else if(sum>=75)cout<<"B+";
    else if(sum>=70)cout<<"B";
    else if(sum>=65)cout<<"C+";
    else if(sum>=60)cout<<"C";
    else if(sum>=55)cout<<"D+";
    else if(sum>=50)cout<<"D";
    else cout<<"F";
    return 0;
}