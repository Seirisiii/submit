#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for(int i=1;i<=s.length();++i){
        if(i%3==0)cout<<"..*.";
        else cout<<"..#.";
    }
    cout<<".\n";
    for(int i=1;i<=s.length();++i){
        if(i%3==0)cout<<".*.*";
        else cout<<".#.#";
    }
    cout<<".\n";
    for(int i=1;i<=s.length();++i){
        if(i%3==0)cout<<"*."<<s[i-1]<<".";
        else{
            if((i-1)%3==0 and i!=1)cout<<"*."<<s[i-1]<<".";
            else cout<<"#."<<s[i-1]<<".";
        }
    }
    if(s.length()%3==0)cout<<"*\n";
    else cout<<"#\n";
    for(int i=1;i<=s.length();++i){
        if(i%3==0)cout<<".*.*";
        else cout<<".#.#";
    }
    cout<<".\n";
    for(int i=1;i<=s.length();++i){
        if(i%3==0)cout<<"..*.";
        else cout<<"..#.";
    }
    cout<<".\n";
    return 0;
}