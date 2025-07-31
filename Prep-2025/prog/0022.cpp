#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n%2==0){
        int l=(n-1)/2;
        int r=(n-1)/2;
        for(int i=0;i<n/2;++i){
            for(int j=0;j<n-1;++j){
                if(j==l or j==r)cout<<"*";
                else cout<<"-";
            }
            --l;
            ++r;
            cout<<"\n";
        }
        l=0;
        r=n-2;
        for(int i=0;i<n/2;++i){
            for(int j=0;j<n-1;++j){
                if(j==l or j==r)cout<<"*";
                else cout<<"-";
            }
            ++l;
            --r;
            cout<<"\n";
        }
    }
    else{
        if(n==1){
            cout<<"*";
            return 0;
        }
        int l=n/2;
        int r=n/2;
        for(int i=0;i<n/2;++i){
            for(int j=0;j<n;++j){
                if(j==l or j==r)cout<<"*";
                else cout<<"-";
            }
            --l;
            ++r;
            cout<<"\n";
        }
        cout<<"*";
        for(int j=1;j<n-1;++j){
            cout<<"-";
        }
        cout<<"*\n";
        l=1;
        r=n-2;
        for(int i=0;i<n/2;++i){
            for(int j=0;j<n;++j){
                if(j==l or j==r)cout<<"*";
                else cout<<"-";
            }
            ++l;
            --r;
            cout<<"\n";
        }
    }
    return 0;
}