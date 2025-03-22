#include<bits/stdc++.h>
using namespace std;
int n;
double mx;
int n1,n2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int a=1;a<n;++a){
        for(int b=a;b<n;++b){
            if(__gcd(a,b)==1 and a+b==n){
                if(mx<(double)a/b){
                    mx=(double)a/b;
                    n1=a;
                    n2=b;
                }
            }
        }
    }
    cout<<n1<<" "<<n2;
    return 0;
}
