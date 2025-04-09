#include<bits/stdc++.h>
using namespace std;
int n,m,k,h;
priority_queue<tuple<double,int,int>> res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>k>>h;
    for(int i=0;i<n;++i){
        priority_queue<double> pq;
        int id,w;
        cin>>id>>w;
        for(int j=0;j<w;++j){
            double x;
            cin>>x;
            pq.emplace(x);
        }
        int a=min(w,k);
        double score=0;
        while(a--){
            score+=pq.top();
            pq.pop();
        }
        double b=min(w,k);
        score=score*1.0/(b*1.0);
        res.emplace(score,-w,-id);
    }
    int sz=res.size();
    for(int i=0;i<h;++i){
        auto [s1,w1,i1]=res.top();
        cout<<-i1<<"\n";
        res.pop();
        auto [s2,w2,i2]=res.top();
        if(i+1==h and i+1<sz and s1==s2 and w1==w2)++h;
    }  
    return 0;
}