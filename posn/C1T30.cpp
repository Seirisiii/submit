#include<bits/stdc++.h>
using namespace std;
int n,k,s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k>>s;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            if(k==2){
                if(i+j!=s)cout<<"("<<i<<", "<<j<<") ";
            }
            else if(k==3){
                for(int a=1;a<=n;++a){
                    if(i+j+a!=s)cout<<"("<<i<<", "<<j<<", "<<a<<") ";
                }
            }
            else if(k==4){
                for(int a=1;a<=n;++a){
                    for(int b=1;b<=n;++b){
                        if(i+j+a+b!=s)cout<<"("<<i<<", "<<j<<", "<<a<<", "<<b<<") ";
                    }
                }
            }
            else if(k==5){
                for(int a=1;a<=n;++a){
                    for(int b=1;b<=n;++b){
                        for(int c=1;c<=n;++c){
                            if(i+j+a+b+c!=s)cout<<"("<<i<<", "<<j<<", "<<a<<", "<<b<<", "<<c<<") ";
                        }
                    }
                }
            }
        }
    }
    return 0;
}
