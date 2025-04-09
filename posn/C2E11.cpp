#include<bits/stdc++.h>
using namespace std;
int n,m;
string s;
stack<string> stk;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    cin>>s;
    stk.emplace(s);
    while(m--){
        char c;
        cin>>c;
        if(c=='a'){
            char ch;
            int in;
            cin>>ch>>in;
            s[in]=ch;
            stk.emplace(s);
        }
        else if(c=='u'){
            int x;
            cin>>x;
            while(x-- and stk.size()>1){
                stk.pop();
            }
            s=stk.top();
        }
    }
    cout<<stk.top();
    return 0;
}