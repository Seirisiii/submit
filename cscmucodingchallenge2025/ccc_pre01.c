#include<stdio.h>
int n;
int buy=2e9;
int res;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        int x;
        scanf("%d",&x);
        if(buy>x)buy=x;
        if(res<x-buy)res=x-buy;
    }
    printf("%d",res);
    return 0;
}