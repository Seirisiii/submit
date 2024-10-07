#include<bits/stdc++.h>
using namespace std;
int n,l;
int pos[1000],range[1000],dmg[1000];
int q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>l;
    for(int i=0;i<n;++i){
        cin>>pos[i]>>range[i]>>dmg[i];
    }
    cin>>q;
    while(q--){
        int hp;
        cin>>hp;
        for(int i=0;i<l;++i){
            for(int j=0;j<n;++j){
                if(pos[j]-range[j]<=i and pos[j]+range[j]>=i)hp-=dmg[j];
            }
            if(hp<=0){
                cout<<"Cleared\n";
                break;
            }
        }
        if(hp>0)cout<<"Destroyed\n";
    }
    return 0;
}