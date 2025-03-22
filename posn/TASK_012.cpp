#include<bits/stdc++.h>
using namespace std;
string s;
int n,m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    int len=s.length(),idx=0;
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            char c;
            cin>>c;
            if(c=='*'){
                c=s[idx];
                ++idx;
                if(idx==len)idx=0;
            }
            cout<<c;
        }
        cout<<"\n";
    }
    return 0;
}