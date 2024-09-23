#include<bits/stdc++.h>
using namespace std;
int cnt;
bool m[42];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<10;++i){
        int n;
        cin>>n;
        if(!m[n%42])++cnt;
        m[n%42]=true;
    }
    cout<<cnt;
    return 0;
}