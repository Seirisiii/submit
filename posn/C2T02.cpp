#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,k;
vector<string> q[N];
priority_queue<pair<int,string>,vector<pair<int,string>>,greater<pair<int,string>>> pq;
set<string> st;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=0;i<n;++i){
        char c;
        cin>>c;
        if(c=='A'){
            int x;
            string s;
            cin>>x>>s;
            pq.emplace(x,s);
        }
        else if(c=='M'){
            int f,p;
            cin>>f>>p;
            for(int j=0;j<f;++j){
                if(pq.empty())break;
                q[p+j].emplace_back(pq.top().second);
                pq.pop();
            }
        }
        else if(c=='R'){
            int x;
            cin>>x;
            // while(!q[x].empty())q[x].pop();
            q[x].clear();
        }
    }
    for(int i=1;i<=k;++i){
        // while(!q[i].empty()){
        //     st.emplace(q[i].front());
        //     q[i].pop();
        // }
        for (string it : q[i])st.emplace(it);
    }
    while(!pq.empty()){
        st.emplace(pq.top().second);
        pq.pop();
    }
    for(auto i:st){
        cout<<i<<"\n";
    }
    return 0;
}