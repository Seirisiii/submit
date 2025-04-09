#include<bits/stdc++.h>
using namespace std;
int n,k;
priority_queue<int,vector<int>,greater<int>> pq;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<n;++i){
        int s;
        cin>>s;
        if(pq.size()<k)pq.emplace(s);
        else if(s>pq.top()){
            pq.pop();
            pq.emplace(s);
        }
        cout<<pq.top()<<"\n";
    }
    return 0;
}