#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        int sz=s.length();
        if(sz==1 and s[0]=='2')cout<<"T\n";
        else if((s[sz-1]-'0')%2==1)cout<<"T\n";
        else cout<<"F\n";
    }
    return 0;
}