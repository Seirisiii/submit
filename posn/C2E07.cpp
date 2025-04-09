#include<bits/stdc++.h>
using namespace std;
int n;
bool sieve[10005];
vector<int> adj[10005];
int dist[10005][10005];
int visited[10005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    sieve[0]=true;
    sieve[1]=true;
    for(int i=2;i<10000;++i){
        if(sieve[i])continue;
        for(int j=i*i;j<10000;j+=i){
            sieve[j]=true;
        }
    }
    for(int i=1000;i<10000;++i){
        if(sieve[i])continue;   
        for(int j=1;j<=1000;j*=10){
            int x=(i/j)%10;
            for(int k=0;k<=9;++k){
                int num=i-(x*j)+(k*j);
                if(num<1000 or num>=10000 or sieve[num] or i==num)continue;
                adj[i].push_back(num);
            }
            
        }
    }
    for(int i=1;i<=10000;++i){
        if(sieve[i])continue;
        for(int j=i+1;j<=10000;++j){
            if(sieve[j])continue;
            dist[i][j]=2e9;
            dist[j][i]=2e9;
        }
        dist[i][i]=0;
    }
    cin>>n;
    for(int i=1;i<=n;++i){
        int s,t;
        cin>>s>>t;
        if(s==t){
            cout<<0<<"\n";
            continue;
        }
        if(sieve[s] or sieve[t]){
            cout<<"Impossible\n";
            continue;
        }
        if(dist[s][t]!=2e9){
            cout<<dist[s][t]<<"\n";
            continue;
        }
        bool ch=false;
        queue<pair<int,int>> q;
        q.emplace(s,0);
        while(!q.empty()){
            auto [u,cnt]=q.front();
            q.pop();
            if(u==t){       
                dist[s][t]=cnt;
                cout<<cnt<<"\n";
                ch=true;
                break;
            }
            if(visited[u]==i)continue;
            visited[u]=i;
            for(auto v:adj[u]){
                if(visited[v]==i)continue;
                dist[s][v]=min(dist[s][v],cnt+1);
                dist[v][s]=min(dist[v][s],cnt+1);
                q.emplace(v,cnt+1);
            }
        }
        if(!ch)cout<<"Impossible\n";
    }
    return 0;
}