#include<bits/stdc++.h>
using namespace std;
const int N=101;
int n,m;
int x[N];
int y[N];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>x[i];
    }
    for(int i=0;i<m;++i){
        cin>>y[i];
    }
    sort(x,x+n,greater<int>());
    sort(y,y+m,greater<int>());
    int i=0,j=0;
    while(i<n and j<m){
        if(x[i]<=y[j]){
            res+=y[j];
            ++i;
            ++j;
        }
        else ++i;
    }
    cout<<res;
    return 0;
}