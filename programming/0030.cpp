#include<bits/stdc++.h>
using namespace std;
string n;
int three;
int eleven;
int sw=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=n.size()-1;i>=0;--i){
        three+=n[i]-'0';
        eleven+=(n[i]-'0')*sw;
        if(sw==1)sw=-1;
        else if(sw==-1)sw=1;
    }
    if(eleven<0)eleven=11+(eleven%11);
    cout<<three%3<<" "<<eleven%11;
    return 0;
}