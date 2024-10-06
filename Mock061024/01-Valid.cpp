#include<bits/stdc++.h>
using namespace std;
string s;
stack<char> sa,sb;
bool check;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    for(auto i:s){
        if(i=='(' or i=='[' or i=='{')sa.push(i);
        else if(i==')' or i==']' or i=='}')sb.push(i);
    }
    if(sa.size()!=sb.size()){
        cout<<"false";
        return 0;
    }
    else{
        while(!sa.empty() and !sb.empty()){
            if(sa.top()=='(' and sb.top()==')')check=false;
            else if(sa.top()=='[' and sb.top()==']')check=false;
            else if(sa.top()=='{' and sb.top()=='}')check=false;
            else{
                check=true;
                cout<<"false";
                return 0;
            }
            sa.pop();
            sb.pop();
        }
    }
    cout<<"true";
    return 0;
}