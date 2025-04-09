#include<bits/stdc++.h>
using namespace std;
int w,g,q;
map<int,vector<tuple<int,int,int,int>>> adj;
void runcase(){
    map<int,int> pr;
    queue<int> q;
    for(int i=0;i<w+g;++i){
        pr[i]=-1;
    }
    for(int i=0;i<w;++i){
        int x;
        cin>>x;
        q.push(i);
        pr[i]=x;
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto [op,v,a,b]:adj[u]){
            if(op==1){
                if(pr[a]==-1)continue;
                pr[v]=pr[u]&pr[a];
            }
            else if(op==2){
                if(pr[a]==-1)continue;
                pr[v]=pr[u]|pr[a];
            }
            else if(op==3){
                if(pr[a]==-1)continue;
                pr[v]=pr[u]^pr[a];
            }
            else if(op==4)pr[v]=1-pr[u];
            else if(op==5){
                if(pr[a]==-1 or pr[b]==-1)continue;
                if(pr[u]==0)pr[v]=pr[a];
                else pr[v]=pr[b];
            }
            else if(op==6){
                if(pr[a]==-1 or pr[b]==-1)continue;
                if(pr[a]==0)pr[v]=pr[u];
                else pr[v]=pr[b];
            }
            else if(op==7){
                if(pr[a]==-1 or pr[b]==-1)continue;
                if(pr[a]==0)pr[v]=pr[b];
                else pr[v]=pr[u];
            }
            q.push(v);
        }
    }
    for(int i=w;i<w+g;++i){
        cout<<pr[i]<<" ";
    }
    cout<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>w>>g>>q;
    for(int i=0;i<w;++i){
        int x;
        string s;
        cin>>x>>s;
    }
    for(int i=0;i<g;++i){
        int x;
        string s;
        cin>>x>>s;
        if(s=="AND"){
            int a,b;
            cin>>a>>b;
            adj[a].emplace_back(1,x,b,0);
            adj[b].emplace_back(1,x,a,0);
        }
        else if(s=="OR"){
            int a,b;
            cin>>a>>b;
            adj[a].emplace_back(2,x,b,0);
            adj[b].emplace_back(2,x,a,0);
        }
        else if(s=="XOR"){
            int a,b;
            cin>>a>>b;
            adj[a].emplace_back(3,x,b,0);
            adj[b].emplace_back(3,x,a,0);
        }
        else if(s=="NOT"){
            int a;
            cin>>a;
            adj[a].emplace_back(4,x,0,0);
        }
        else if(s=="MUX"){
            int s,a,b;
            cin>>s>>a>>b;
            adj[s].emplace_back(5,x,a,b);
            adj[a].emplace_back(6,x,s,b);
            adj[b].emplace_back(7,x,s,a);
        }
    }
    while(q--)runcase();
    return 0;
}