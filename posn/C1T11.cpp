#include<bits/stdc++.h>
using namespace std;
int m,n,p,q;
int m1[100][100],m2[100][100];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n>>p>>q;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>m1[i][j];
        }
    }
    for(int i=0;i<p;++i){
        for(int j=0;j<q;++j){
            cin>>m2[i][j];
        }
    }
    if(n==p){
        for(int i=0;i<m;++i){
            for(int j=0;j<q;++j){
                int sum=0;
                for(int k=0;k<n and k<p;++k){
                    sum+=m1[i][k]*m2[k][j];
                }
                cout<<sum<<" ";
            }
            cout<<"\n";
        }
    }
    else cout<<"No Solution";
    return 0;
}
