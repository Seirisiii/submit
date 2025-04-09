#include<bits/stdc++.h>
using namespace std;
const int N=1005;
int n,m;
int arr[N][N];
void solve(int li,int ri,int lj,int rj){
    char c;
    cin>>c;
    int midi=(li+ri)/2;
    int midj=(lj+rj)/2;
    if(c=='D'){
        solve(li,midi,lj,midj);
        if(rj>=midj+1)solve(li,midi,midj+1,rj);
        if(ri>=midi+1)solve(midi+1,ri,lj,midj);
        if(rj>=midj+1 and ri>=midi+1)solve(midi+1,ri,midj+1,rj);
    }
    else{
        for(int i=li;i<=ri;++i){
            for(int j=lj;j<=rj;++j){
                arr[i][j]=c-'0';
            }
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    solve(0,n-1,0,m-1); 
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}