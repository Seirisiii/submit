#include<bits/stdc++.h>
using namespace std;
double m,f,h;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>f>>h;
    double sum=m*0.4+f*0.5+h*0.1;
    if(sum>=80)cout<<"G";
    else if(sum>=50)cout<<"P";
    else cout<<"F";
    return 0;
}


