#include<bits/stdc++.h>
using namespace std;
int q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>q;
    while(q--){
        long double x;
        cin>>x;
        cout<<fixed<<setprecision(0)<<pow(2,x)<<"\n";
    }
    return 0;
}