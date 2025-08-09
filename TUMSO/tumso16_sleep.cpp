#include<bits/stdc++.h>
using namespace std;
int n;
int t[100005];
int cnt;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int s,e;
        cin>>s>>e;
        ++t[s];
        --t[e];
    }
    for(int i=1;i<=100000;++i){
        t[i]+=t[i-1];
    }
    for(int i=0;i<=100000;++i){
        if(cnt<t[i]){
            cnt=t[i];
            res=i;
        }
    }
    if(cnt==n)cout<<"yes "<<res;
    else cout<<"no "<<res;
    return 0;
}