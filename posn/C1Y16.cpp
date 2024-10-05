#include<bits/stdc++.h>
using namespace std;
char c;
void solve(char c){
    if(c=='N' or c=='n' or c=='y' or c=='Y')cout<<"yes";
    else cout<<"no";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c;
    solve(c);
    return 0;
}
