#include<bits/stdc++.h>
using namespace std;
int n;
int a;
long long cnt[200000];
long long res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        ++cnt[x];
    }
    cin>>a;
    for(int i=0;i<=min(100000,a/2);++i){
        if(i==a-i)res+=cnt[i]*(cnt[i]-1)/2;
        else res+=cnt[i]*cnt[a-i];
    }
    cout<<res;
    return 0;
}