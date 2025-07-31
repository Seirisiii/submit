#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int Adrian=0;
int Bruno=0;
int Goran=0;
string a="ABC";
string b="BABC";
string g="CCAABB";
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>s;
    for(int i=0;i<s.length();++i){
        if(a[i%3]==s[i])++Adrian;
        if(b[i%4]==s[i])++Bruno;
        if(g[i%6]==s[i])++Goran;
    }
    int mx=max({Adrian,Bruno,Goran});
    cout<<mx<<"\n";
    if(mx==Adrian)cout<<"Adrian\n";
    if(mx==Bruno)cout<<"Bruno\n";
    if(mx==Goran)cout<<"Goran\n";
    return 0;
}