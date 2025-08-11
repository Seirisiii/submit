#include<bits/stdc++.h>
using namespace std;
int n;
bool arr[1001][1001];
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int x,y;
        cin>>x>>y;
        if(!arr[x][y])++res;
        arr[x][y]=true;
    }
    cout<<res;
    return 0;
}