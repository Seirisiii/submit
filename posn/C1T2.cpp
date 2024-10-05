#include<bits/stdc++.h>
using namespace std;
int n;
int m,d;
int mn=INT_MAX,mx=INT_MIN;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        mn=min(mn,x);
        mx=max(mx,x);
    }
    cin>>m>>d;
    int diff=mx-mn;
    for(int i=0;i<m;++i){
        int q;
        cin>>q;
        if(q>=diff-d and q<=diff+d)cout<<"/"<<q<<"\\\n";
    }
    cout<<d<<" "<<diff;
    return 0;
}
