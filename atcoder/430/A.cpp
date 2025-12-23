#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c>>d;
    if(c>=a){
        if(d>=b)cout<<"No";
        else cout<<"Yes";
    }
    else cout<<"No";
    return 0;
}