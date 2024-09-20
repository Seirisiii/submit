#include<bits/stdc++.h>
using namespace std;
string s;
bool capital,small;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for(auto i:s){
        if(i>='A' and i<='Z')capital=true;
        if(i>='a' and i<='z')small=true;
        if(capital and small){
            cout<<"Mix";
            return 0;
        }
    }
    if(capital)cout<<"All Capital Letter";
    else if(small)cout<<"All Small Letter";
    return 0;
}