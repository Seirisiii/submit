#include<bits/stdc++.h>
using namespace std;
int TC;
void runcase(){
    long long x;
    cin>>x;
    if(x%2==0)cout<<1<<"\n";
    else cout<<x<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}