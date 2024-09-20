#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    int s=a+b+c;
    if(s>=80)cout<<"A";
    else if(s>=75)cout<<"B+";
    else if(s>=70)cout<<"B";
    else if(s>=65)cout<<"C+";
    else if(s>=60)cout<<"C";
    else if(s>=55)cout<<"D+";
    else if(s>=50)cout<<"D";
    else if(s>=0)cout<<"F";
    return 0;
}