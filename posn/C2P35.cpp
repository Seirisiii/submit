#include<bits/stdc++.h>
using namespace std;
const int N=100;
int n,m;
char arr[N][N];
int TC;
int di[8]={-1,-1,0,1,1,1,0,-1};
int dj[8]={0,1,1,1,0,-1,-1,-1};
bool visited[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin>>arr[i][j];
        }
    }
    cin>>TC;
    while(TC--){
        for(int i=1;i<=n;++i){
            for(int j=1;j<=m;++j){
                visited[i][j]=false;
            }
        }
        int cnt=0;
        int I,J;
        cin>>I>>J;
        if(arr[I][J]=='L'){
            cout<<0<<"\n";
            continue;
        }
        queue<pair<int,int>> q;
        q.emplace(I,J);
        while(!q.empty()){
            auto [i,j]=q.front();
            q.pop();
            if(visited[i][j])continue;
            visited[i][j]=true;
            ++cnt;
            for(int k=0;k<8;++k){
                int ni=i+di[k];
                int nj=j+dj[k];
                if(ni<1 or ni>n or nj<1 or nj>m)continue;
                if(arr[ni][nj]=='L')continue;
                if(visited[ni][nj])continue;
                q.emplace(ni,nj);
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;
}