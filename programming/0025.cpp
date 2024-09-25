#include<bits/stdc++.h>
using namespace std;
string a,b;
char c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a;
    cin>>c;
    cin>>b;
    int sa=a.length(),sb=b.length();
    int mx=max(sa,sb);
    int mn=min(sa,sb);
    if(c=='+'){
        if(sa==sb){
            cout<<"2";
            for(int i=1;i<sa;++i){
                cout<<"0";
            }
        }
        else{
            cout<<"1";
            for(int i=1;i<mx-mn;++i){
                cout<<"0";
            }
            cout<<"1";
            for(int i=0;i<mn-1;++i){
                cout<<"0";
            }
        }
    }
    else if(c=='*'){
        cout<<"1";
        for(int i=0;i<mn+mx-2;++i){
            cout<<"0";
        }
    }
    return 0;
}