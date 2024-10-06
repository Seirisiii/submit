#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int m=n;
    int tmp=1;
    while(m/=10){
        tmp*=10;
    }
    while(tmp){
        int x=n/tmp%10;
        if(x==0)cout<<"zero ";
        else if(x==1)cout<<"one ";
        else if(x==2)cout<<"two ";
        else if(x==3)cout<<"three ";
        else if(x==4)cout<<"four ";
        else if(x==5)cout<<"five ";
        else if(x==6)cout<<"six ";
        else if(x==7)cout<<"seven ";
        else if(x==8)cout<<"eight ";
        else if(x==9)cout<<"nine ";
        tmp/=10;
    }
    return 0;
}
