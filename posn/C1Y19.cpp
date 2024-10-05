#include<bits/stdc++.h>
using namespace std;
int m,n;
long long solve(int m,int n){
    if(n==0)return 1;
    return m*solve(m,n-1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    cout<<solve(m,n);
    return 0;
}