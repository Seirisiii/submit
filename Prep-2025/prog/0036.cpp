#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
ll res=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n%2)++n;
    for(int i=n;i>n/2;--i){
        res*=(ll)i;
    }
    for(int i=n/2;i>=1;--i){
        res/=(ll)i;
    }
    cout<<res;
    return 0;
}