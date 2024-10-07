#include<bits/stdc++.h>
using namespace std;
int d,e;
int t[10001];
int sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>d>>e;
    for(int i=1;i<=d;++i){
        cin>>t[i];
        t[i]+=t[i-1];
    }
    for(int i=1;i<=d;++i){
        sum+=t[i];
    }
    if(sum>e)cout<<"Fail "<<e-sum;
    else cout<<"Success "<<e-sum;
    return 0;
}
