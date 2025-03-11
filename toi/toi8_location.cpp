#include<bits/stdc++.h>
using namespace std;
const int N=1e3+1;
int m,n;
int k;
int qs[N][N];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    cin>>k;
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            cin>>qs[i][j];
            qs[i][j]+=qs[i-1][j]+qs[i][j-1]-qs[i-1][j-1];
        }
    }
    for(int i=k;i<=m;++i){
        for(int j=k;j<=n;++j){
            res=max(res,qs[i][j]-qs[i-k][j]-qs[i][j-k]+qs[i-k][j-k]);
        }
    }
    cout<<res;
    return 0;
}