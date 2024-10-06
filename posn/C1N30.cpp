#include<bits/stdc++.h>
using namespace std;
char s[100000];
void solve(char *s){
    for(int i=0;i<strlen(s)/2;++i){
        if(s[i]!=s[strlen(s)-1-i]){
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
    scanf("%s",s);
    solve(s);
    return 0;
}


