#include<bits/stdc++.h>
using namespace std;
string s;
bool t1=true,t2,t3;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for(auto i:s){
        if(i=='A')swap(t1,t2);
        else if(i=='B')swap(t2,t3);
        else if(i=='C')swap(t1,t3);
    }
    if(t1)cout<<1;
    else if(t2)cout<<2;
    else if(t3)cout<<3;
    return 0;
}