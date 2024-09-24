#include<bits/stdc++.h>
using namespace std;
int m;
string s;
int adrian,bruno,goran;
string a="ABC",b="BABC",g="CCAABB";
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m;
    cin>>s;
    for(int i=0;i<s.size();++i){
        if(s[i]==a[i%3])++adrian;
        if(s[i]==b[i%4])++bruno;
        if(s[i]==g[i%6])++goran;
    }
    int mx=max({adrian,bruno,goran});
    cout<<mx<<"\n";
    if(mx==adrian)cout<<"Adrian\n";
    if(mx==bruno)cout<<"Bruno\n";
    if(mx==goran)cout<<"Goran\n";
    return 0;
}