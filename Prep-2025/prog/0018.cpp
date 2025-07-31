#include<bits/stdc++.h>
using namespace std;
int n,k;
bool sieve[1005];
int cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=2;i<=n;++i){
        if(sieve[i])continue;
        for(int j=i;j<=n;j+=i){
            if(sieve[j])continue;
            sieve[j]=true;
            ++cnt;
            if(cnt==k){
                cout<<j;
                return 0;
            }
        }
    }
    return 0;
}