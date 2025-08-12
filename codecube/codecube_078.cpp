#include<bits/stdc++.h>
using namespace std;
int x;
int a,b,c,d,e;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x;
    cin>>a>>b>>c>>d>>e;
    int sum=a+b+c+d+e;
    if(sum==x)cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e;
    else if(sum-a==x)cout<<"0 "<<b<<" "<<c<<" "<<d<<" "<<e;
    else if(sum-b==x)cout<<a<<" 0 "<<c<<" "<<d<<" "<<e;
    else if(sum-c==x)cout<<a<<" "<<b<<" 0 "<<d<<" "<<e;
    else if(sum-d==x)cout<<a<<" "<<b<<" "<<c<<" 0 "<<e;
    else if(sum-e==x)cout<<a<<" "<<b<<" "<<c<<" "<<d<<" 0";
    else cout<<-1;
    return 0;
}