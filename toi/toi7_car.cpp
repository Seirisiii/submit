#include<bits/stdc++.h>
using namespace std;
int m,n,t;
int arr[101][41];
int res[41];
void solve(int T,int M){
    if(T==t){
        for(int i=0;i<t;++i){
            cout<<res[i]<<"\n";
        }
        return ;
    }
    if(M-1>0 and arr[T+1][M-1]==0){
        res[T]=1;
        solve(T+1,M-1);
    }
    if(M+1<=m and arr[T+1][M+1]==0){
        res[T]=2;
        solve(T+1,M+1);
    }
    if(arr[T+1][M]==0){
        res[T]=3;
        solve(T+1,M);
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m;
    cin>>n;
    cin>>t;
    for(int i=1;i<=t;++i){
        for(int j=1;j<=m;++j){
            cin>>arr[i][j];
        }
    }
    solve(0,n);
    return 0;
}