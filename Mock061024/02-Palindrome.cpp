#include<bits/stdc++.h>
using namespace std;
bool checkPal(string s,int low,int high){
    while(low<high){
        if(s[low]!=s[high])return false;
        ++low;
        --high;
    }
    return true;
}
string longestPalSubstr(string s){
    int n=s.length();
    int maxLen=1,start=0;
    for(int i=0;i<n;++i){
        for(int j=i;j<n;++j){
            if(checkPal(s,i,j) and (j-i+1)>maxLen){
                start=i;
                maxLen=j-i+1;
            }
        }
    }
    return s.substr(start,maxLen);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    cout<<longestPalSubstr(s).length();
    return 0;
}
