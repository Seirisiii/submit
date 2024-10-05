#include<bits/stdc++.h>
using namespace std;
int a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a;
    if(a>=1000)cout<<"100\n";
    else if(a>=0 and a<1000)cout<<"0\n";
    else cout<<"Error\n";
    return 0;
}
