#include<bits/stdc++.h>
using namespace std;
int n;
int res=INT_MAX;
void solve(int idx,int n){
    if(n==1){
        res=min(res,idx);
        return ;
    }
    for(int i=1;i<n;++i){
        if(n%i==0)solve(idx+1,n-i);
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    solve(0,n);
    cout<<res;
    return 0;
}
