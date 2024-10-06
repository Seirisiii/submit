#include<bits/stdc++.h>
using namespace std;
int n;
int mn=INT_MAX,mx=INT_MIN;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        mn=min(mn,x);
        mx=max(mx,x);
    }
    bool prime[mx+1];
    for(int i=0;i<=mx;++i){
        prime[i]=false;
    }
    for(int i=2;i*i<=mx;++i){
        if(!prime[i]){
            for(int j=i*i;j<=mx;j+=i){
                prime[j]=true;
            }
        }
    }
    for(int i=mn;i<=mx;++i){
        if(!prime[i])cout<<i<<" ";
    }
    return 0;
}


