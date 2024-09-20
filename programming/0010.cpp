#include<bits/stdc++.h>
using namespace std;
bool a=true,b,c;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for(auto i:s){
        if(i=='A')swap(a,b);
        if(i=='B')swap(b,c);
        if(i=='C')swap(a,c);
    }
    if(a)cout<<1;
    else if(b)cout<<2;
    else if(c)cout<<3;
    return 0;
}