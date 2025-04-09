#include<bits/stdc++.h>
using namespace std;
int t;
map<int,int> mp;
queue<int> q;
queue<int> qt[1005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>t;
    for(int i=0;i<t;++i){
        int x;
        cin>>x;
        for(int j=0;j<x;++j){
            int val;
            cin>>val;
            mp[val]=i;
        }
    }
    char c;
    while(cin>>c and c!='S'){
        if(c=='E'){
            int x;
            cin>>x;
            int val=mp[x];
            if(qt[val].empty())q.push(val);
            qt[val].push(x);
        }
        else if(c=='D'){
            int val=q.front();
            cout<<qt[val].front()<<"\n";
            qt[val].pop();
            if(qt[val].empty())q.pop();
        }
    }
    return 0;
}