#include<bits/stdc++.h>
using namespace std;
int n,k,m;
bool res[500000];
priority_queue<tuple<int,int,int>,vector<tuple<int,int,int>>,greater<tuple<int,int,int>>> pq;
priority_queue<int,vector<int>,greater<int>> pq2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k>>m;
    for(int i=0;i<n;++i){
        int s,f;
        cin>>s>>f;
        pq.emplace(s,f,i);
    }
    while(!pq.empty()){
        auto [s,f,i]=pq.top();
        pq.pop();
        while(!pq2.empty()){
            if(s>pq2.top())pq2.pop();
            else break;
        }
        if(pq2.size()<k){
            res[i]=true;
            pq2.emplace(f);
        }
    }
    while(m--){
        int x;
        cin>>x;
        --x;
        if(res[x])cout<<"Y ";
        else cout<<"N ";
    }
    return 0;
}