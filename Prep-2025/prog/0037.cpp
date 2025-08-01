#include<bits/stdc++.h>
using namespace std;
int n,m;
int l,k,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    cin>>l>>k>>c;
    int cost=l*k*c;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            int x;
            cin>>x;
            cost+=x;
        }
    }
    cout<<(cost+c-1)/c;
    return 0;
}