#include<bits/stdc++.h>
using namespace std;
int n,m;
char brick[20][20];
int mn[20];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
     for(int i=0;i<m;++i){
        mn[i]=n;
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>brick[i][j];
            if(brick[i][j]=='O')mn[j]=min(mn[j],i);
        }
    }
    for(int i=0;i<m;++i){
        int x;
        cin>>x;
        for(int j=mn[i]-1;j>=max(mn[i]-x,0);--j){
            brick[j][i]='#';
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<brick[i][j];
        }
        cout<<"\n";
    }
    return 0;
}