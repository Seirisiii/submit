#include<bits/stdc++.h>
using namespace std;
int d,y,t,cost;
bool ati;
int diff;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>d>>y>>t>>cost;
    if(y%4!=0)ati=false;
    else if(y%4==0 and y%100!=0)ati=true;
    else if(y%4==0 and y%100==0 and y%400!=0)ati=false;
    else if(y%4==0 and y%100==0 and y%400==0)ati=true;
    if(ati){
        if(d>7)diff+=10;
        else diff+=5;
        if(t>=930 and t<=1130)diff+=30;
        else if(t>=1131 and t<=1330)diff+=20;
        else if(t>=1331 and t<=1830)diff+=15;
        else diff+=10;
    }
    else{
        if(d>7)diff+=5;
        if(t>=930 and t<=1130)diff+=15;
        else if(t>=1131 and t<=1330)diff+=10;
        else if(t>=1331 and t<=1830)diff+=5;
    }
    cout<<fixed<<setprecision(2)<<d*cost*1.0-(d*cost*diff/100.0);
    return 0;
}
