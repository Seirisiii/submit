#include<bits/stdc++.h>
using namespace std;
string s;
int ap,dg,sp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,s);
    for(int i=0;i<s.length();++i){
        if((s[i]>='a' and s[i]<='z') or (s[i]>='A' and s[i]<='Z'))++ap;
        else if(s[i]>='0' and s[i]<='9')++dg;
        else ++sp;
    }
    cout<<"Number of Alphabets in the string is : "<<ap<<"\n";
    cout<<"Number of Digits in the string is : "<<dg<<"\n";
    cout<<"Number of Special characters in the string is : "<<sp<<"\n";
    return 0;
}
