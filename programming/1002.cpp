#include<bits/stdc++.h>
using namespace std;
int d;
int I,V,X,L,C;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>d;
    for(int i=1;i<=d;++i){
        int n=i;
        while(n!=0){
            if(n>=100){
                ++C;
                n-=100;
            }
            else if(n>=90){
                ++C;
                ++X;
                n-=90;
            }
            else if(n>=50){
                ++L;
                n-=50;
            }
            else if(n>=40){
                ++L;
                ++X;
                n-=40;
            }
            else if(n>=10){
                ++X;
                n-=10;
            }
            else if(n>=9){
                ++X;
                ++I;
                n-=9;
            }
            else if(n>=5){
                ++V;
                n-=5;
            }
            else if(n>=4){
                ++I;
                ++V;
                n-=4;
            }
            else if(n>=1){
                ++I;
                n-=1;
            }
        }
    }
    cout<<I<<" "<<V<<" "<<X<<" "<<L<<" "<<C;
    return 0;
}