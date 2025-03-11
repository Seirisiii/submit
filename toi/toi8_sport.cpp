#include<bits/stdc++.h>
using namespace std;
int k;
void solve(string s,int a,int b){
    if(a==k or b==k){
        cout<<s<<"\n";
        return ;
    }
    solve(s+"W ",a+1,b);
    solve(s+"L ",a,b+1);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>k;
    cin>>a>>b;
    solve("",a,b);
    return 0;
}