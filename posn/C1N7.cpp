#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n%3==0 and n%5==0)cout<<35;
    else if(n%3==0 and n%5!=0)cout<<3;
    else if(n%3!=0 and n%5==0)cout<<5;
    else cout<<5555;
    return 0;
}
