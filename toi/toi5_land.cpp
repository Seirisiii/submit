#include<bits/stdc++.h>
using namespace std;
int m,n;
double c[3][3];
double mn=DBL_MAX;
bool visited[3][3];
int di[8]={-1,-1,0,1,1,1,0,-1};
int dj[8]={0,1,1,1,0,-1,-1,-1};
void solve(int N,double sum){
    if(N==0){
        mn=min(mn,sum);
        return ;
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(visited[i][j])continue;
            visited[i][j]=true;
            sum+=c[i][j];
            for(int k=0;k<8;++k){
                int ni=i+di[k];
                int nj=j+dj[k];
                if(ni<0 or ni>=m or nj<0 or nj>=n)continue;
                if(visited[ni][nj])continue;
                c[ni][nj]+=c[i][j]*0.1;
            }
            solve(N-1,sum);
            visited[i][j]=false;
            sum-=c[i][j];
            for(int k=0;k<8;++k){
                int ni=i+di[k];
                int nj=j+dj[k];
                if(ni<0 or ni>=m or nj<0 or nj>=n)continue;
                if(visited[ni][nj])continue;
                c[ni][nj]-=c[i][j]*0.1;
            }
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
            cin>>c[i][j];
        }
    }
    solve(m*n,0);
    cout<<fixed<<setprecision(2)<<mn;
    return 0;
}