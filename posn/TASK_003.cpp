#include<bits/stdc++.h>
using namespace std;
long long n;
long long s1,s2,s5,s10;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    s10=n/10;
    s5=n%10/5;
    s2=n%10%5/2;
    s1=n%10%5%2;
    cout<<s10+s5+s2+s1<<"\n"<<s1<<" "<<s2<<" "<<s5<<" "<<s10;
    return 0;
}