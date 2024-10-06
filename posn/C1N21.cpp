#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int l=1,r=n*2-1;
    int x=1;
    for(int i=1;i<=n*2-1;++i){
        for(int j=1;j<=n*2-1;++j){
            if(j==l and j==r)cout<<x;
            else if(j==l or j==r)cout<<x;
            else cout<<" ";
        }
        ++l;
        --r;
        if(i>=n)--x;
        else ++x;
        cout<<"\n";
    }
    return 0;
}

