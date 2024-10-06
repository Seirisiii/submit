#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int n1=n/10000;
    int n2=n/1000%10;
    int n3=n/100%10;
    int n4=n/10%10;
    int n5=n%10;
    if(n1>5)cout<<1; //1
    else if(n2>5)cout<<2;
    else if(n3>5)cout<<3;
    else if(n4>5)cout<<4;
    else if(n5>5)cout<<5;
    else cout<<0;
    if(n1==n5 and n2==n4){ //2
        if(n1+n5>5)cout<<1;
        else if(n2*n4>5)cout<<2;
        else cout<<0;
    }
    else{
        if(n5!=0 and n1/n5>5)cout<<1;
        else if(n2-n5>5)cout<<2;
        else cout<<0;
    }
    if(n1+n2+n3+n4+n5>25)cout<<1; //3
    else if(n1*n2*n3*n4*n5>55)cout<<2;
    else cout<<0;
    return 0;
}
