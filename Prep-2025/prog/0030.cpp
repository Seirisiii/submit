#include<bits/stdc++.h>
using namespace std;
string s;
int three;
int eleven;
int now=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for(int i=s.length()-1;i>=0;--i){
        three+=s[i]-'0';
        eleven+=(s[i]-'0')*now;
        now*=-1;
    }
    if(eleven<0)eleven=11+(eleven%11);
    cout<<three%3<<" "<<eleven%11;
    return 0;
}