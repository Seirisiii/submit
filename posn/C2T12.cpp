#include<bits/stdc++.h>
using namespace std;
int TC;
void runcase(){
    int n,m;
    cin>>n>>m;
    int mx=-2e9;
    int mxd=-2e9;
    for(int i=0;i<n;++i){
        int d,h;
        cin>>d>>h;
        mx=max(mx,d-h);
        mxd=max(mxd,d);
    }
    if(mxd>=m){
        cout<<"1\n";
        return ;
    }
    if(mx<=0){
        cout<<"-1\n";
        return ;
    }
    int res=1+(m-mxd)/mx+((m-mxd)%mx!=0);
    cout<<res<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}