#include<bits/stdc++.h>
using namespace std;
string s;
bool check;
string res;
string home;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for(int i=0;i<s.length();++i){
        if(s[i]=='['){
            check=true;
            continue;
        }
        else if(s[i]==']'){
            res=home+res;
            home="";
            check=false;
            continue;
        }
        if(!check)res=res+s[i];
        else home+=s[i];
    }
    cout<<res;
    return 0;
}
