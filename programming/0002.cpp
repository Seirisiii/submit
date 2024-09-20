#include<bits/stdc++.h>
using namespace std;
int n;
int mx=INT_MIN;
int mn=INT_MAX;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        mx=max(mx,a);
        mn=min(mn,a);
    }
    cout<<mn<<"\n"<<mx;
    return 0;
}