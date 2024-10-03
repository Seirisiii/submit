#include<bits/stdc++.h>
using namespace std;
int w,h,n;
int filter[3000];
int l0,l50;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>w>>h>>n;
    while(n--){
        int x,a;
        cin>>x>>a;
        for(int i=x;i<x+a and i<w;++i){
            ++filter[i];
        }
    }
    
    for(int i=0;i<w;++i){
        if(filter[i]==1)++l50;
        else if(filter[i]==0)++l0;
    }
    cout<<l0*h<<" "<<l50*h;
    return 0;
}