#include<bits/stdc++.h>
using namespace std;
int n;
set<string> s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        string str;
        cin>>str;
        s.insert(str);
    }
    for(auto i:s){
        cout<<i<<"\n";
    }
    return 0;
}