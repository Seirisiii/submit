#include<bits/stdc++.h>
using namespace std;
int n;
double res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int a,b,c,d,e;
        cin>>a>>b>>c>>d>>e;
        res+=a+b*0.75+c*0.5+d*0.25+e*0.125;
    }
    cout<<ceil(res);
    return 0;
}