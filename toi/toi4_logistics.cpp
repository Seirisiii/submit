#include<bits/stdc++.h>
using namespace std;
const int MAX='z'+1;
int n;
vector<pair<char,int>> adj[MAX];
queue<char> q;
bool visited[MAX];
double cost;
vector<tuple<char,char,double>> res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        char u,v;
        int w;
        cin>>u>>v>>w;
        adj[u].emplace_back(v,w);
        adj[v].emplace_back(u,w);
    }
    q.emplace('X');
    while(!q.empty()){
        char u=q.front();
        q.pop();
        if(u=='Y')break;
        if(visited[u])continue;
        visited[u]=true;
        vector<int> v;
        for(auto i:adj[u]){
            if(visited[i.first])continue;
            if(q.empty())q.emplace(i.first);
            v.emplace_back(i.second);
        }
        if(v.empty()){
            cout<<"broken";
            return 0;
        }
        sort(v.begin(),v.end());
        int vz=v.size();
        if(vz%2==0)res.emplace_back(u,q.front(),(v[vz/2-1]+v[vz/2])/2.0);
        else res.emplace_back(u,q.front(),(double)v[vz/2]);
    }
    for(auto [u,v,w]:res){
        cost+=w;
        printf("%c %c %.1lf\n",u,v,w);
    }
    printf("%.1lf",cost);
    return 0;
}