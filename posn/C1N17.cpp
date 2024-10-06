#include<bits/stdc++.h>
using namespace std;
int cnt;
int mx=INT_MIN,mn=INT_MAX;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
        int x;
        cin>>x;
        if(x==0)break;
        mn=min(mn,x);
        mx=max(mx,x);
        ++cnt;
    }
    if(cnt==0)cout<<"No data";
    else cout<<mx<<" "<<mn;
    return 0;
}
