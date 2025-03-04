#include<bits/stdc++.h>
using namespace std;
string s;
string w;
deque<int> dq[3];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    cin>>w;
    for(int i=s[0]-'0';i<s[0]-'0'+9;++i){
        int k=i%9;
        if(k==0)k=9;
        dq[0].emplace_back(k);
    }
    for(int i=s[1]-'0';i<s[1]-'0'+9;++i){
        int k=i%9;
        if(k==0)k=9;
        dq[1].emplace_back(k);
    }
    for(int i=s[2]-'0';i<s[2]-'0'+9;++i){
        int k=i%9;
        if(k==0)k=9;
        dq[2].emplace_back(k);
    }
    for(auto i:w){
        // for(int a=0;a<3;++a){
        //     for(auto j:dq[a]){
        //         cout<<j<<" ";
        //     }
        //     cout<<"\n";
        // }
        cout<<dq[2][dq[1][dq[0][i-'0'-1]-1]-1];
        for(int k=0;k<s[0]-'0';++k){
            dq[0].emplace_back(dq[0].front());
            dq[0].pop_front();
        }
        dq[1].emplace_front(dq[1].back());
        dq[1].pop_back();
        for(int k=0;k<s[2]-'0';++k){
            dq[2].emplace_back(dq[2].front());
            dq[2].pop_front();
        }
    }
    return 0;
}