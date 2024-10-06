#include<bits/stdc++.h>
using namespace std;
float a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    if(b>0)printf("%.1f",a+b);
    else printf("%.1f",a*b);
    return 0;
}