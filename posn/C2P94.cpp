#include<bits/stdc++.h>
using namespace std;
int TC;
void runcase(){
    int n;
    cin>>n;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    for(int i=0;i<n;++i){
        int st,ed;
        cin>>st>>ed;
        pq.emplace(ed,st);
    }
    int res=1;
    auto [ed,st]=pq.top();
    pq.pop();
    while(!pq.empty()){
        auto [edd,stt]=pq.top();
        pq.pop();
        if(stt>=ed){
            ++res;
            ed=edd;
        }
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