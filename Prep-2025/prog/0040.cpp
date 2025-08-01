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
        if(s=="2" or (s[s.length()-1]-'0')%2==1)cout<<"T\n";
        else cout<<"F\n";
    }
    return 0;
}