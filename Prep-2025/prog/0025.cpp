#include<bits/stdc++.h>
using namespace std;
string a,b;
char op;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>op>>b;
    if(op=='+'){
        if(a==b){
            cout<<'2';
            for(int i=1;i<a.length();++i){
                cout<<'0';
            }
        }
        else{
            if(a.length()<b.length()){
                swap(a,b);
            }
            int idx=a.length()-b.length();
            cout<<'1';
            for(int i=1;i<a.length();++i){
                if(i==idx)cout<<'1';
                else cout<<'0';
            }
        }
    }
    else if(op=='*'){
        cout<<'1';
        for(int i=1;i<a.length()+b.length()-1;++i){
            cout<<'0';
        }
    }
    return 0;
}