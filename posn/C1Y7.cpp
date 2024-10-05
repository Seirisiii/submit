#include<bits/stdc++.h>
using namespace std;
int a,b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    if(a>b){
        cout<<"Invalid";
        return 0;
    }
    for(int i=a;i<=b;++i){
        cout<<i<<" ";
    }
    return 0;
}
