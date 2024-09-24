#include<bits/stdc++.h>
using namespace std;
int n;
int s[10],b[10];
int solve(int i,int S,int B,bool check){
    if(i==n){
        if(!check)return INT_MAX;
        return abs(S-B);
    }
    int choose=solve(i+1,S*s[i],B+b[i],true);
    int skip=solve(i+1,S,B,check);
    return min(choose,skip);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s[i]>>b[i];
    }
    cout<<solve(0,1,0,false);
    return 0;
}