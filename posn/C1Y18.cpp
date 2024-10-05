#include<bits/stdc++.h>
using namespace std;
int n;
long long solve(int n){
    if(n==0 or n==1)return 1;
    return n*solve(n-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<solve(n);
    return 0;
}

