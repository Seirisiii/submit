#include<bits/stdc++.h>
using namespace std;
int TC;
void runcase(){
    int n;
    cin>>n;
    stack<int> s;
    queue<int> q;
    priority_queue<int> pq;
    bool cs=true;
    bool sq=true;
    bool spq=true;
    while(n--){
        int x;
        short val;
        cin>>x>>val;
        if(x==1){
            if(cs)s.emplace(val);
            if(sq)q.emplace(val);
            if(spq)pq.emplace(val);           
        }
        else if(x==2){
            if(s.empty())cs=false;
            else if(s.top()!=val)cs=false;
            else s.pop();
            if(q.empty())sq=false;
            else if(q.front()!=val)sq=false;
            else q.pop();
            if(pq.empty())spq=false;
            else if(pq.top()!=val)spq=false;
            else pq.pop();
        }
    }
    if(cs and !sq and !spq)cout<<"stack\n";
    else if(!cs and sq and !spq)cout<<"queue\n";
    else if(!cs and !sq and spq)cout<<"priority queue\n";
    else if(!cs and !sq and !spq)cout<<"impossible\n";
    else cout<<"not sure\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}
