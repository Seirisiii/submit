#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int n;
long long qs[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            cin>>qs[i][j];
            qs[i][j]+=qs[i-1][j]+qs[i][j-1]-qs[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while(q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        ++a,++b,++c,++d;
        cout<<qs[c][d]-qs[a-1][d]-qs[c][b-1]+qs[a-1][b-1]<<"\n";
    }
    return 0;
}