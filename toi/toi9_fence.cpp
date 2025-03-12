#include<bits/stdc++.h>
using namespace std;
int tc=2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(tc--){
        int m,n;
        int t;
        cin>>m>>n;
        cin>>t;
        int qs[m+5][n+5]={};
        for(int i=1;i<=m;++i){
            for(int j=1;j<=n;++j){
                qs[i][j]=1;
            }
        }
        for(int i=0;i<t;++i){
            int a,b;
            cin>>a>>b;
            ++a,++b;
            qs[a][b]=0;
        }
        for(int i=1;i<=m;++i){
            for(int j=1;j<=n;++j){
                qs[i][j]+=qs[i-1][j]+qs[i][j-1]-qs[i-1][j-1];
            }
        }
        int sz=min(n,m);
        while(sz>=1){
            int s=sz-1;
            int in=4*s;
            for(int i=1;i+s<=m;++i){
                for(int j=1;j+s<=n;++j){
                    int a=qs[i+s][j+s]-qs[i+s][j-1]-qs[i-1][j+s]+qs[i-1][j-1];
                    int b=qs[i+s-1][j+s-1]-qs[i+s-1][j]-qs[i][j+s-1]+qs[i][j];
                    if(a-b==in){
                        cout<<sz<<"\n";
                        goto gt;
                    }
                }
            }
            --sz;
        }
        gt:;
    }
    return 0;
}