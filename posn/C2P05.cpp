#include<bits/stdc++.h>
using namespace std;
const int N=20;
int n;
int x,y;
int X,Y;
int arr[N][N];
bool visited[N][N];
int di[8]={-1,-2,-2,-1,1,2,2,1};
int dj[8]={-2,-1,1,2,2,1,-1,-2};
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>x>>y;
    cin>>X>>Y;
    queue<tuple<int,int,int>> q;
    q.emplace(x,y,0);
    while(!q.empty()){
        auto [i,j,cnt]=q.front();
        q.pop();
        if(i==X and j==Y){
            cout<<cnt;
            return 0;
        }
        if(visited[i][j])continue;
        visited[i][j]=true;
        for(int k=0;k<8;++k){
            int ni=i+di[k];
            int nj=j+dj[k];
            if(ni<0 or ni>=n or nj<0 or nj>=n)continue;
            if(visited[ni][nj])continue;
            q.emplace(ni,nj,cnt+1);
        }
    }
    return 0;
}