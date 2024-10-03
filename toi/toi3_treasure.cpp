#include<bits/stdc++.h>
using namespace std;
string s;
double x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin>>s and s!="*"){
        double d=0;
        string direc="";
        for(auto i:s){
            if(i>='0' and i<='9'){
                d*=10;
                d+=i-'0';
            }
            else direc+=i;
        }
        if(direc.length()==2)d/=sqrt(2);
        if(direc=="N")y+=d;
        else if(direc=="NE")x+=d,y+=d;
        else if(direc=="E")x+=d;
        else if(direc=="SE")x+=d,y-=d;
        else if(direc=="S")y-=d;
        else if(direc=="SW")x-=d,y-=d;
        else if(direc=="W")x-=d;
        else if(direc=="NW")x-=d,y+=d;
    }
    cout<<fixed<<setprecision(3)<<x<<" "<<y<<"\n"<<sqrt(x*x+y*y);
    return 0;
}