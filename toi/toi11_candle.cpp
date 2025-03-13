#include<bits/stdc++.h>
using namespace std;
const int MAX=2000;
int m,n;
char arr[MAX][MAX];
int di[8]={-1,-1,0,1,1,1,0,-1};
int dj[8]={0,1,1,1,0,-1,-1,-1};
int res;
void bfs(int I,int J){
    queue<pair<int,int>> q;
    q.emplace(I,J);
    while(!q.empty()){
        auto [i,j]=q.front();
        q.pop();
        if(arr[i][j]=='0')continue;
        arr[i][j]='0';
        for(int k=0;k<8;++k){
            int ni=i+di[k];
            int nj=j+dj[k];
            if(ni<0 or ni>=m or nj<0 or nj>=n)continue;
            if(arr[ni][nj]=='0')continue;
            q.emplace(ni,nj);
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j]=='1'){
                ++res;
                bfs(i,j);
            }
        }
    }
    cout<<res;
    return 0;
}