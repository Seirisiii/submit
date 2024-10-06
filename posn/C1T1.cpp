#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
const int MAX=1e6+2;
char n[MAX],m[MAX],k[MAX];
char rn[MAX],rm[MAX],rk[MAX];
char rnm[MAX];
bool mns;
char rans[MAX];
char ans[MAX];
int main(){
    scanf("%s",n);
    scanf("%s",m);
    scanf("%s",k);
    int sn=strlen(n);
    int sm=strlen(m);
    int sk=strlen(k);
    for(int i=0;i<sn;++i){
        rn[i]=n[sn-i-1];
    }
    for(int i=0;i<sm;++i){
        rm[i]=m[sm-i-1];
    }
    for(int i=0;i<sk;++i){
        rk[i]=k[sk-i-1];
    }
    int nm=sn>sm?sn:sm;
    for(int i=strlen(rn);i<nm;++i){
        rn[i]='0';
    }
    for(int i=strlen(rm);i<nm;++i){
        rm[i]='0';
    }
    int extra=0;
    for(int i=0;i<nm;++i){
        if(rn[i]+rm[i]+extra-'0'<='9'){
            rnm[i]=rn[i]+rm[i]+extra-'0';
            extra=0;
        }
        else{
            rnm[i]=rn[i]+rm[i]+extra-'0'-10;
            extra=1;
        }
    }
    if(extra==1)rnm[nm]='1';
    int snm=strlen(rnm);
    if(snm<sk){
        mns=true;
        for(int i=0;i<sk;++i){
            char tmp=rnm[i];
            rnm[i]=rk[i];
            rk[i]=tmp;
        }
        int tmp=snm;
        snm=sk;
        sk=tmp;
    }
    else if(snm==sk){
        bool check=false;
        for(int i=0;i<snm;++i){
            if(rnm[i]!=rk[i]){
                check=true;
                break;
            }
        }
        if(!check){
            printf("0");
            return 0;
        }
        for(int i=snm-1;i>=0;--i){
            if(rnm[i]<rk[i]){
                mns=true;
                break;
            }
        }
        if(mns){
            for(int i=0;i<sk;++i){
                char tmp=rnm[i];
                rnm[i]=rk[i];
                rk[i]=tmp;
            }
            int tmp=snm;
            snm=sk;
            sk=tmp;
        }
    }
    int nmk=snm>sk?snm:sk;
    for(int i=snm;i<nmk;++i){
        rnm[i]='0';
    }
    for(int i=sk;i<nmk;++i){
        rk[i]='0';
    }
    int nega=0;
    for(int i=0;i<nmk;++i){
        if(rnm[i]-rk[i]+'0'-nega>='0'){
            rans[i]=rnm[i]-rk[i]+'0'-nega;
            nega=0;
        }
        else{
            rans[i]=rnm[i]-rk[i]+'0'-nega+10;
            nega=1;
        }
    }
    if(nega==1)rans[nmk]='9';
    int sans=strlen(rans);
    for(int i=0;i<sans;++i){
        ans[i]=rans[strlen(rans)-i-1];
    }
    if(mns)printf("-");
    bool zero=false;
    for(int i=0;i<sans;++i){
        if(ans[i]=='0' and !zero)continue;
        zero=true;
        printf("%c",ans[i]);
    }
    return 0;
}
