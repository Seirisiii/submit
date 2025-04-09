#include<bits/stdc++.h>
using namespace std;
int TC;
void runcase(){
    int n;
    cin>>n;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq,ans;
    for(int i=0;i<n;++i){
        int st,ed;
        cin>>st>>ed;
        pq.emplace(st,ed);
    }
    int res=1;
    auto [st,ed]=pq.top();
    ans.emplace(ed,st);
    pq.pop();
    for(int i=1;i<n;++i){
        st=pq.top().first;
        ed=pq.top().second;
        auto [edd,stt]=ans.top();
        if(edd<=st){
            ans.pop();
            ans.emplace(ed,st);
        }
        else{
            ans.emplace(ed,st);
            ++res;
        }
        pq.pop();
    }
    cout<<res<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}