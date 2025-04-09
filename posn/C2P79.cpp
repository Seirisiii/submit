#include<bits/stdc++.h>
using namespace std;
const int N=105;
const int INF=1e9;
int TC;
void runcase(){
    int dist[N][N]={};
    for(int i=1;i<=100;++i){
        for(int j=1;j<=100;++j){
            dist[i][j]=INF;
        }
        dist[i][i]=0;
    }
    while(true){
        int u,v;
        cin>>u>>v;
        if(u==0 and v==0)break;
        dist[u][v]=1;
    }
    for(int k=1;k<=100;++k){
        for(int i=1;i<=100;++i){
            for(int j=1;j<=100;++j){
                dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
            }
        }
    }
    double res=0;
    double n=0;
    for(int i=1;i<=100;++i){
        for(int j=1;j<=100;++j){
            if(i==j)continue;
            if(dist[i][j]==INF)continue;
            res+=dist[i][j];
            ++n;
        }
    }
    printf("%.3lf\n",res/n);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}