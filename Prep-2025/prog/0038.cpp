#include<bits/stdc++.h>
using namespace std;
int n;
set<string> st;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        st.insert(s);
    }
    for(auto i:st){
        cout<<i<<"\n";
    }
    return 0;
}