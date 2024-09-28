#include<bits/stdc++.h>
using namespace std;
int A,B,C;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>A>>B>>C;
    for(int a=1;a<=100;++a){
        if(A%a!=0)continue;
        int c=A/a;
        for(int b=-100;b<=100;++b){
            if(b==0 or C%b!=0)continue;
            int d=C/b;
            if(a*c==A and a*d+b*c==B and b*d==C){
                cout<<a<<" "<<b<<" "<<c<<" "<<d;
                return 0;
            }
        }
    }
    cout<<"No Solution";
    return 0;
}