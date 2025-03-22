#include<bits/stdc++.h>
using namespace std;
int n,k;
long long sum;
long long b;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=1;i<=n;++i){
        long long c;
        cin>>c;
        if(i!=k)sum+=c;
    }
    cin>>b;
    sum=(sum-1)/2+1;
    if(b-sum>0)cout<<b-sum;
    else cout<<"Chi So Cute >//<'";
    return 0;
}
