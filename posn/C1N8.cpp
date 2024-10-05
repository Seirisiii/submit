#include<bits/stdc++.h>
using namespace std;
char c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c;
    if((c>='A' and c<='Z') or (c>='a' and c<='z'))cout<<"Character";
    else if(c>='0' and c<='9')cout<<"Number";
    else cout<<"Special Characters";
    return 0;
}

