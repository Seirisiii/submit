#include<bits/stdc++.h>
using namespace std;
set<int> s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<10;++i){
        int x;
        cin>>x;
        s.insert(x%42);
    }
    cout<<s.size();
    return 0;
}