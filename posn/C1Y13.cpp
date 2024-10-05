#include<bits/stdc++.h>
using namespace std;
int n;
char s[1000001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf(" %[^\n]",s);
    scanf("%d",&n);
    int ss=strlen(s);
    for(int i=0;i<ss;++i){
        if(s[i]==' ')printf(" ");
        else if(s[i]>='a' and s[i]<='z'){
            s[i]=s[i]-'a'-n;
            if(s[i]<0)s[i]+=26;
            printf("%c",s[i]+'a');
        }
        else if(s[i]>='A' and s[i]<='Z'){
            s[i]=s[i]-'A'-n;
            if(s[i]<0)s[i]+=26;
            printf("%c",s[i]+'A');
        }
    }
    return 0;
}
