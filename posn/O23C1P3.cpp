#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[1005][105];
int x,y;
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>arr[i][j];
        }
    }
    cin>>x>>y;
    for(int i=0;i<n;++i){
        int res=0;
        for(int j=0;j<m;++j){
            if(j>=x and j<=y)res+=2*arr[i][j];
            else res+=arr[i][j];
        }
        mx=max(mx,res);
    }
    cout<<mx;
    return 0;
}