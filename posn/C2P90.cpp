#include<bits/stdc++.h>
using namespace std;
const int N=105;
int m,n,b;
int arr[N][N];
int bom=9;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n>>b;
    for(int k=0;k<b;++k){
        int x,y,s;
        cin>>x>>y>>s;
        for(int i=x;i<x+s;++i){
            for(int j=y;j<y+s;++j){
                arr[i][j]=bom;
            }
        }
        ++bom;
    }
    for(int i=1;i<=m;++i){
        for(int j=1;j<=n;++j){
            if(arr[i][j]>=9){
                cout<<"*";
                continue;
            }
            set<int> s;
            for(int x=max(1,i-1);x<=min(m,i+1);++x){
                for(int y=max(1,j-1);y<=min(n,j+1);++y){
                    if(x==i and y==j)continue;
                    if(arr[x][y]>=9)s.insert(arr[x][y]);
                }
            }
            cout<<s.size();
        }
        cout<<"\n";
    }
    return 0;
}