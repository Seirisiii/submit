#include<bits/stdc++.h>
using namespace std;
char c;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c>>n;
    if(c=='A')printf("%.2f",1000000*n*0.05);
    else if(c=='B')printf("%.2f",1500000*n*0.07);
    else if(c=='C')printf("%.2f",2500000*n*0.1);
    else cout<<"Invalid";
    return 0;
}
