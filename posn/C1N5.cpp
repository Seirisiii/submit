#include<bits/stdc++.h>
using namespace std;
int a;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a;
    cout<<a/1440<<"\n"<<a%1440/60<<"\n"<<a%60;
    return 0;
}
