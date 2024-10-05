#include<bits/stdc++.h>
using namespace std;
string s;
bool A,a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for(auto i:s){
        if(i>='A' and i<='Z')A=true;
        else if((i>='a' and i<='z') or (i>='0' and i<='9'))a=true;
    }
    if(A and a)cout<<"["<<s.length()<<"]Mix";
    else if(A)cout<<"["<<s.length()<<"]All Capital Letter";
    else if(a)cout<<"["<<s.length()<<"]All Small Letter";
    return 0;
}


