#include<bits/stdc++.h>
using namespace std;
int n,m;
int l,k;
int c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    cin>>l>>k;
    cin>>c;
    int cost=l*k*c;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            int x;
            cin>>x;
            cost+=x;
        }
    }
    if(cost%c==0)cout<<cost/c;
    else cout<<cost/c+1;
    return 0;
}