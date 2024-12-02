#include<bits/stdc++.h>
using namespace std;
int L,K;
char a[127],b[127];
char k[127];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>L>>K;
    for(int i=0;i<L;++i){
        cin>>a[i];
    }
    for(int i=0;i<L;++i){
        cin>>b[i];
    }
    for(int i=0;i<K;++i){
        cin>>k[i];
    }
    for(int i=0;i<K;++i){
        for(int j=0;j<L;++j){
            char list[3]={a[j],b[j],k[i]};
            sort(list,list+3);
            k[i]=list[1];
        }
        cout<<k[i];
    }
    return 0;
}