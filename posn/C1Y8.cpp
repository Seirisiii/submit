#include<bits/stdc++.h>
using namespace std;
int mn=INT_MAX,mx=INT_MIN;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=10;
    while(n--){
        int x;
        cin>>x;
        if(x>0){
            mx=max(mx,x);
            mn=min(mn,x);
        }
    }
    cout<<mx<<" "<<mn;
    return 0;
}
