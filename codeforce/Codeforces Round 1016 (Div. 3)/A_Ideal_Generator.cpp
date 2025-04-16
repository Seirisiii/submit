#include<bits/stdc++.h>
using namespace std;
int TC;
void runcase(){
    int n;
    cin>>n;
    if(n%2)cout<<"YES\n";
    else cout<<"NO\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}