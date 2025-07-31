#include<bits/stdc++.h>
using namespace std;
int a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    cout<<(int)log2(a)+(int)log2(b)+(int)log2(c);
    return 0;
}