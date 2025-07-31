#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    if(c-b>b-a)cout<<c-b-1;
    else cout<<b-a-1;
    return 0;
}