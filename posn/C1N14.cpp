#include<bits/stdc++.h>
using namespace std;
char s[2000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf("%s",s);
    char *ptr=s;
    for(int i=0;i<strlen(ptr);++i){
        if(i%2==0)*(ptr+i)=toupper(*(ptr+i));
        else *(ptr+i)=tolower(*(ptr+i));
        cout<<*(ptr+i);
    }
    return 0;
}
