#include<bits/stdc++.h>
using namespace std;
int n;
string s[13];
void solve(int N,int k){
    if(N<0)return ;
    if(N==0){
        for(int i=0;i<k;++i){
            cout<<s[i]<<"\n";
        }
        cout<<"E\n";
        return ;
    }
    s[k]="--";
    solve(N-1,k+1);
    s[k]="||";
    solve(N-2,k+1);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    solve(n,0);
    return 0;
}