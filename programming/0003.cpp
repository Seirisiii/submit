#include<bits/stdc++.h>
using namespace std;
const int N=100;
int m,n;
int matrix[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>matrix[i][j];
        }
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            int x;
            cin>>x;
            cout<<matrix[i][j]+x<<" ";
        }
        cout<<"\n";
    }
    return 0;
}