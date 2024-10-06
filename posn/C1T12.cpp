#include<bits/stdc++.h>
using namespace std;
int n,k;
int x[15],y[15];
int solve(int i,int K){
    if(K<0)return INT_MIN;
    if(i==n or K==0)return 0;
    int choose=solve(i+1,K-y[i])+x[i];
    int skip=solve(i+1,K);
    return max(choose,skip);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<n;++i){
        cin>>x[i]>>y[i];
    }
    cout<<solve(0,k);
    return 0;
}