#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,s);
    for(int i=0;i<s.length();++i){
        cout<<s[i];
        if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')i+=2;
    }
    return 0;
}