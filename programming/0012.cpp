#include<bits/stdc++.h>
using namespace std;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    int sz=s.size();
    for(int i=0;i<sz;++i){
        if((i+1)%3==0)cout<<"..*.";
        else cout<<"..#.";
    }
    cout<<".\n";
    for(int i=0;i<sz;++i){
        if((i+1)%3==0)cout<<".*.*";
        else cout<<".#.#";
    }
    cout<<".\n";
    for(int i=0;i<sz;++i){
        if((i+1)%3==0)cout<<"*."<<s[i]<<".*";
        else if(i%3==0 and i!=0)cout<<"."<<s[i]<<".";
        else cout<<"#."<<s[i]<<".";
    }
    if(sz%3==0)cout<<"\n";
    else cout<<"#\n";
    for(int i=0;i<sz;++i){
        if((i+1)%3==0)cout<<".*.*";
        else cout<<".#.#";
    }
    cout<<".\n";
    for(int i=0;i<sz;++i){
        if((i+1)%3==0)cout<<"..*.";
        else cout<<"..#.";
    }
    cout<<".\n";
    return 0;
}