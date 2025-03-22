#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n==1)cout<<"*@*";
    else if(n==2)cout<<"*---*\n**@**\n*---*";
    else{
        int l=0,r=2*n;
        for(int i=0;i<n-1;++i){
            for(int j=0;j<2*n+1;++j){
                if(j<=l or j>=r)cout<<"*";
                else cout<<"-";
            }
            cout<<"\n";
            ++l;
            --r;
        }
        --l;
        ++r;
        int k=0;
        if(n%2)k=n/2;
        else k=n/2-1;
        for(int i=0;i<k;++i)cout<<"-";
        for(int i=0;i<n-k;++i)cout<<"*";
        cout<<"@";
        for(int i=0;i<n-k;++i)cout<<"*";
        for(int i=0;i<k;++i)cout<<"-";
        cout<<"\n";
        for(int i=0;i<n-1;++i){
            for(int j=0;j<2*n+1;++j){
                if(j<=l or j>=r)cout<<"*";
                else cout<<"-";
            }
            cout<<"\n";
            --l;
            ++r;
        }
    }
    return 0;
}
