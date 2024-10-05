#include<bits/stdc++.h>
using namespace std;
string s;
bool solve(string s){	    
    for(int i=0;i<s.length()/2;++i){	        
        if(s[i]!=s[s.length()-i-1])return false;	    
    }	    
    return true;	
}	
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    if(solve(s))cout<<s<<" is a palindrome";
    else cout<<s<<" is not a palindrome";
    return 0;
}
