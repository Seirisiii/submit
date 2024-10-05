#include<bits/stdc++.h>
using namespace std;
int a,b,c,d,e,f;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c>>d>>e>>f;
    int sum1=a%10*100+b%10*10+c%10;
    int sum2=d%10*100+e%10*10+f%10;
    printf("%03d",(sum1+sum2)%1000);
    return 0;
}
