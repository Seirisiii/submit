#include<bits/stdc++.h>
using namespace std;
int n;
char s[5][5];
int cc[5],dd[5];
bool isValid(char str[5]){
    for(int i=0;i<n;++i){
        bool corra[5]={},corrb[5]={};
        int ansa=0,ansb=0;
        for(int j=0;j<5;++j){
            if(s[i][j]==str[j]){
                corra[j]=corrb[j]=true;
                ++ansa;
            }
        }
        if(ansa!=cc[i])return false;
        for(int j=0;j<5;++j){
            if(corra[j])continue;
            for(int k=0;k<5;++k){
                if(corrb[k])continue;
                if(s[i][k]==str[j]){
                    corra[j]=corrb[k]=true;
                    ++ansb;
                    break;
                }
            }
        }
        if(ansb!=dd[i])return false;
    }
    return true;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%s %d %d",s[i],&cc[i],&dd[i]);
    }
    for(char a='A';a<='Z';++a){
        for(char b='A';b<='Z';++b){
            for(char c='A';c<='Z';++c){
                for(char d='A';d<='Z';++d){
                    for(char e='A';e<='Z';++e){
                        char str[5]={a,b,c,d,e};
                        if(isValid(str))printf("%c%c%c%c%c\n",str[0],str[1],str[2],str[3],str[4]);
                    }
                }
            }
        }
    }
    return 0;
}
