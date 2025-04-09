#include<bits/stdc++.h>
using namespace std;
int n;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    tuple<int,char,char> t[n+5];
    for(int i=0;i<n;++i){
        char r,s;
        cin>>r>>s;
        int rank;
        if(r>='2' and r<='9'){
            rank=r-'0';
            if(rank==2)rank=15;
        }
        else if(r=='T')rank=10;
        else if(r=='J')rank=11;
        else if(r=='Q')rank=12;
        else if(r=='K')rank=13;
        else if(r=='A')rank=14;
        t[i]={rank,s,r};
    }
    sort(t,t+n);
    for(int i=0;i<n;++i){
        auto [R,s,r]=t[i];
        cout<<r<<" "<<s<<"\n";
    }
    return 0;
}