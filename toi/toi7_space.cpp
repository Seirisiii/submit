#include<bits/stdc++.h>
using namespace std;
unsigned d;
bool sol(unsigned n){
    return n and !(n&(n-1));
}
void bin(unsigned n,unsigned idx){
    if(idx==0)return ;
    bin(n>>1,idx-1);
    cout<<(n&1);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>d;
    unsigned n=1<<d;
    for(unsigned i=0;i<n;++i){
        for(unsigned j=i+1;j<n;++j){
            unsigned x=i^j;
            if(sol(x)==0)continue;
            bin(i,d);
            cout<<" ";
            bin(j,d);
            cout<<"\n";
        }
    }
    return 0;
}