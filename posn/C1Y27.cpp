#include<bits/stdc++.h>
using namespace std;
char s[1000];
int A,a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf(" %[^\n]",s);
    for(int i=0;i<strlen(s);++i){
        if(s[i]>='A' and s[i]<='Z')++A;
        else if(s[i]>='a' and s[i]<='z')++a;
    }
    if(A>a)cout<<"Change Lower to Upper : "<<a;
    else if(A<a)cout<<"Change Upper to Lower : "<<A;
    else cout<<"Change to Both : "<<a;
	return 0;
}

