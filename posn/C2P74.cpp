#include<bits/stdc++.h>
using namespace std;
int n;
set<int> s;
int res;
int mn,mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int x;
        cin>>x;
        s.emplace(x);
    }
    s.emplace(2e9);
    set<int> st;
    int prv=-2e9;
    for(auto i:s){
        if(i==prv+1)st.emplace(i);
        else{
            if(res<st.size()){
                res=st.size();
                mn=*st.begin();
                mx=*(prev(st.end()));
            }
            st.clear();
            st.emplace(i);
        }
        prv=i;
    }
    cout<<res<<"\n"<<mn<<" "<<mx<<"\n";
    return 0;
}