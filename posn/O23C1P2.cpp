#include<bits/stdc++.h>
using namespace std;
int r,c,k;
int m[1002][1002];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>r>>c>>k;
    for(int i=0;i<r;++i){
        for(int j=0;j<c;++j){
            cin>>m[i][j];
        }
    }
    for(int i=0;i<r;i+=k){
        for(int j=0;j<c;j+=k){
            if(i+k>r or j+k>c)continue;
            int mx=0;
            for(int a=i;a<i+k;++a){
                for(int b=j;b<j+k;++b){
                    mx=max(mx,m[a][b]);
                }
            }
            res+=mx;
        }
    }
    cout<<res;
    return 0;
}