#include<bits/stdc++.h>
using namespace std;
int p;
int o,e;
int so,se;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>p;
    o=p,e=p;
    p*=2;
    while(p--){
        int x;
        cin>>x;
        if(x%2==0){
            so=0;
            ++se;
            if(se>=3)o-=3;
            else --o;
        }
        else{
            se=0;
            ++so;
            if(so>=3)e-=3;
            else --e;
        }
        if(o<=0){
            cout<<0<<"\n"<<x;
            return 0;
        }
        else if(e<=0){
            cout<<1<<"\n"<<x;
            return 0;
        }
    }
    return 0;
}