#include<bits/stdc++.h>
using namespace std;
int a,b,c,n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c>>n;
    for(int i=0;i<=n;++i){
        for(int j=0;j<=n;++j){
            for(int k=0;k<=n;++k){
                if(a*i+b*j+c*k==n){
                    if(i>1)printf("Use %d coins of type A : %d\n",i,a*i);
                    else printf("Use %d coin of type A : %d\n",i,a*i);
                    if(j>1)printf("Use %d coins of type B : %d\n",j,b*j);
                    else printf("Use %d coin of type B : %d\n",j,b*j);
                    if(k>1)printf("Use %d coins of type C : %d\n",k,c*k);
                    else printf("Use %d coin of type C : %d\n",k,c*k);
                    printf("\n");
                }
            }
        }
    }
    return 0;
}

