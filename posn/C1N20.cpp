#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(j==0 or i==0 or j==n-1 or i==n-1)cout<<"*";
            else cout<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

