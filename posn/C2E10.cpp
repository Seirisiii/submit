#include<bits/stdc++.h>
using namespace std;
int n;
set<tuple<int,int,int>> st;
map<int,pair<int,int>> mp;
int curridx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        int op;
        cin>>op;
        if(op==1){
            int id,s;
            cin>>id>>s;
            st.insert(make_tuple(-1*s,curridx,id));
            mp[id]={s,curridx};
            ++curridx;
        }
        else if(op==2){
            int id,s;
            cin>>id>>s;
            int os=mp[id].first;
            int idx=mp[id].second;
            st.erase(st.find(make_tuple(-1*os,idx,id)));
            st.insert(make_tuple(-1*s,idx,id));
            mp[id]={s,idx};
        }
        else if(op==3){
            if(st.empty())cout<<"no customer\n";
            else{
                cout<<get<2>(*st.begin())<<"\n";
                st.erase(st.begin());
            }
        }
    }
    return 0;
}