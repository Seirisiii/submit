#include<bits/stdc++.h>
using namespace std;
int n,k;
bool p[1001];
int cnt;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=2;i<=n;++i){
        if(p[i])continue;
        for(int j=i;j<=n;j+=i){
            if(p[j])continue;
            p[j]=true;
            ++cnt;
            if(cnt==k){
                cout<<j;
                return 0;
            }
        }
    }
    return 0;
}