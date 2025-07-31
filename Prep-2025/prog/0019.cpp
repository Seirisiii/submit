#include<bits/stdc++.h>
using namespace std;
int n;
int s[11],b[11];
int mn=INT_MAX;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s[i]>>b[i];
    }
    for(int i=1;i<(1<<n);++i){
        int ress=1;
        int resb=0;
        for(int j=0;j<n;++j){
            if(i&(1<<j)){
                ress*=s[j];
                resb+=b[j];
            }
        }
        mn=min(mn,abs(ress-resb));
    }
    cout<<mn;
    return 0;
}