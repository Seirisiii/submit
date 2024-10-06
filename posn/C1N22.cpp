#include<bits/stdc++.h>
using namespace std;
int h1,m1,h2,m2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>h1>>m1>>h2>>m2;
    int h=h2-h1;
    int m=m2-m1;
    if(h==0 and m<=15)cout<<0;
    else if(h==0 and m>15)cout<<10;
    else if(h==1 and m==0)cout<<10;
    else if(h==1 and m>0)cout<<20;
    else if(h==2 and m==0)cout<<20;
    else if(h==2 and m>0)cout<<30;
    else if(h==3 and m==0)cout<<30;
    else if(h==3 and m>0)cout<<50;
    else if(h==4 and m==0)cout<<50;
    else if(h==4 and m>0)cout<<70;
    else if(h==5 and m==0)cout<<70;
    else if(h==5 and m>0)cout<<90;
    else if(h==6 and m==0)cout<<90;
    else if(h==6 and m>0)cout<<200;
    else if(h>6)cout<<200;
    return 0;
}