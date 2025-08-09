#include<bits/stdc++.h>
using namespace std;
int n;
int res;
int buy=INT_MAX;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        buy=min(buy,x);
        res=max(res,x-buy);
    }
    cout<<res;
    return 0;
}