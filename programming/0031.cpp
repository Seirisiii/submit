#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int solve(int n){
    int cnt=0;
    while(n/=2){
        ++cnt;
    }
    return cnt;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    cout<<solve(a)+solve(b)+solve(c);
    return 0;
}