#include<bits/stdc++.h>
using namespace std;
const int N=55;
int x,y,z;
int arr[N][N][N];
bool visited[N][N][N];
int di[6]={-1,1,0,0,0,0};
int dj[6]={0,0,-1,1,0,0};
int dk[6]={0,0,0,0,-1,1};
int n;
int res1;
int res2;
void bfs(int I,int J,int K){
    queue<tuple<int,int,int>> q;
    q.emplace(I,J,K);
    while(!q.empty()){
        auto [i,j,k]=q.front();
        q.pop();
        if(visited[i][j][k])continue;
        visited[i][j][k]=true;
        for(int l=0;l<6;++l){
            int ni=i+di[l];
            int nj=j+dj[l];
            int nk=k+dk[l];
            if(ni<0 or ni>=x or nj<0 or nj>=y or nk<0 or nk>=z)continue;
            if(visited[ni][nj][nk])continue;
            if(arr[ni][nj][nk]==0)continue;
            q.emplace(ni,nj,nk);
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>y>>z;
    for(int i=0;i<x;++i){
        for(int j=0;j<y;++j){
            for(int k=0;k<z;++k){
                cin>>arr[i][j][k];
            }
        }
    }
    for(int i=0;i<x;++i){
        for(int j=0;j<y;++j){
            for(int k=0;k<z;++k){
                if(arr[i][j][k]==1 and !visited[i][j][k]){
                    bfs(i,j,k);
                    ++res1;
                }
            }
        }
    }
    cout<<res1<<"\n";
    cin>>n;
    while(n--){
        int p,q,r,R;
        cin>>p>>q>>r>>R;
        for(int i=max(0,p-R);i<=min(x-1,p+R);++i){
            for(int j=max(0,q-R);j<=min(y-1,q+R);++j){
                for(int k=max(0,r-R);k<=min(z-1,r+R);++k){
                    arr[i][j][k]=0;
                }
            } 
        }
    }
    for(int i=0;i<x;++i){
        for(int j=0;j<y;++j){
            for(int k=0;k<z;++k){
                visited[i][j][k]=false;
            }
        }
    }
    for(int i=0;i<x;++i){
        for(int j=0;j<y;++j){
            for(int k=0;k<z;++k){
                if(arr[i][j][k]==1 and !visited[i][j][k]){
                    bfs(i,j,k);
                    ++res2;
                }
            }
        }
    }
    cout<<res2<<"\n";
    return 0;
}