#include<bits/stdc++.h>
using namespace std;
const int N=150;
int m,n;
int rs,cs;
int re,ce;
int arr[N][N];
int dists[N][N];
int diste[N][N];
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};
bool visiteds[N][N];
bool visitede[N][N];
int res,mn=1e9;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    cin>>rs>>cs;
    --rs,--cs;
    cin>>re>>ce;
    --re,--ce;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
            dists[i][j]=1e9;
            diste[i][j]=1e9;
        }
    }
    queue<pair<int,int>> qs;
    qs.emplace(rs,cs);
    dists[rs][cs]=0;
    while(!qs.empty()){
        int i=qs.front().first;
        int j=qs.front().second;
        qs.pop();
        if(visiteds[i][j])continue;
        visiteds[i][j]=true;
        for(int k=0;k<4;++k){
            int ni=i+di[k];
            int nj=j+dj[k];
            if(ni<0 or ni>=m or nj<0 or nj>=n)continue;
            if(visiteds[ni][nj])continue;
            if(arr[ni][nj]!=0)qs.emplace(ni,nj);
            dists[ni][nj]=min(dists[ni][nj],dists[i][j]+1);
        }
    }
    queue<pair<int,int>> qe;
    qe.emplace(re,ce);
    diste[re][ce]=0;
    while(!qe.empty()){
        int i=qe.front().first;
        int j=qe.front().second;
        qe.pop();
        if(visitede[i][j])continue;
        visitede[i][j]=true;
        for(int k=0;k<4;++k){
            int ni=i+di[k];
            int nj=j+dj[k];
            if(ni<0 or ni>=m or nj<0 or nj>=n)continue;
            if(visitede[ni][nj])continue;
            if(arr[ni][nj]!=0)qe.emplace(ni,nj);
            diste[ni][nj]=min(diste[ni][nj],diste[i][j]+1);
        }
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j]==1)continue;
            if(dists[i][j]==1e9 or diste[i][j]==1e9)continue;
            ++res;
            mn=min(mn,dists[i][j]+diste[i][j]+1);
        }
    }
    cout<<res<<"\n"<<mn;
    return 0;
}