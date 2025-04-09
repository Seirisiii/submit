#include<bits/stdc++.h>
using namespace std;    
string s;
string res;
map<string,int> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,s);
    for(int i=0;i<s.length();++i){
        if(i==s.length()-1){
            if(!ispunct(s[i])){
                if(s[i]>='A' and s[i]<='Z')s[i]+='a'-'A';
                res+=s[i];
            }
            ++mp[res];
            res.clear();
            continue;
        }
        if(s[i]==' '){
            ++mp[res];
            res.clear();
            continue;
        }
        if(ispunct(s[i]))continue;
        if(s[i]>='A' and s[i]<='Z')s[i]+='a'-'A';
        res+=s[i];
    }
    for(auto i:mp){
        if(i.first=="")continue;
        cout<<i.first<<" "<<i.second<<"\n";
    }
    return 0;
}