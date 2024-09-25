#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n%2==0){
        int l=n/2-1,r=n/2-1;
        for(int i=0;i<n;++i){
            for(int j=0;j<n-1;++j){
                if(j==l or j==r)cout<<"*";
                else cout<<"-";
            }
            if(i<n/2-1)--l,++r;
            else if(i>n/2-1)++l,--r;
            cout<<"\n";
        }
    }
    else{
        int l=n/2,r=n/2;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                if(j==l or j==r)cout<<"*";
                else cout<<"-";
            }
            if(i<=n/2-1)--l,++r;
            else if(i>n/2-1)++l,--r;
            cout<<"\n";
        }
    }
    return 0;
}