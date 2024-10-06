#include<bits/stdc++.h>
using namespace std;
int num[5];
int mn=INT_MAX;
int mx=INT_MIN;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<5;++i){
        cin>>num[i];
        mn=min(mn,num[i]);
        mx=max(mx,num[i]);
    }
    cout<<mn<<"\n"<<mx;
    return 0;
}
