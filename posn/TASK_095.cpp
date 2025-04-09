#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> qs(10000005,1);
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    qs[0]=0;
    qs[1]=0;
    for(int i=2;i<=10000002;++i){
        if(qs[i]==0)continue;
        for(int j=i*2;j<=10000002;j+=i){
            qs[j]=0;
        }
    }
    for(int i=1;i<=10000002;++i){
        qs[i]+=qs[i-1];
    }
    while(n--){
        int l,r;
        cin>>l>>r;
        if(r<l)cout<<0<<"\n";
        else cout<<qs[max(r,0)]-qs[max(0,l-1)]<<"\n";
    }
    return 0;
}