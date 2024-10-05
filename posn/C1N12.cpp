#include<bits/stdc++.h>
using namespace std;
string s;
void solve(string s){
    for(int i=0;i<s.length();++i){
        if(s[i]!=s[s.length()-1-i]){
            cout<<"NO";
            return ;
        }
    }
    cout<<"YES";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    solve(s);
    return 0;
}


