#include<bits/stdc++.h>
using namespace std;
int x,y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>y;
    if(x>y)cout<<2;
    else cout<<(y+x-1)/x;
    return 0;
}