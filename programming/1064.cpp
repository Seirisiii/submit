#include<bits/stdc++.h>
using namespace std;
int w,l;
char arr[64][64];
int dp[64][64];
int mx;
int mn=INT_MAX;
bool visited[64][64];
vector<pair<int,int>> v;
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};
void bfs(int I,int J){
    queue<pair<int,int>> q;
    q.emplace(I,J);
    while(!q.empty()){
        auto [i,j]=q.front();
        q.pop();
        if(visited[i][j])continue;
        visited[i][j]=true;
        v.emplace_back(i,j);
        for(int k=0;k<4;++k){
            int ni=i+di[k];
            int nj=j+dj[k];
            if(ni<0 or ni>=l or nj<0 or nj>=w)continue;
            if(visited[ni][nj])continue;
            if(arr[ni][nj]=='P')q.emplace(ni,nj);
        }
    }
    return ;
}
void solve(int I,int J){
    int cnt=0;
    for(int i=I-mx+1;i<=I;++i){
        for(int j=J-mx+1;j<=J;++j){
            if(arr[i][j]=='P' and !visited[i][j]){
                ++cnt;
                bfs(i,j);
            }
        }
    }
    for(auto [i,j]:v){
        visited[i][j]=false;
    }
    v.clear();
    mn=min(mn,cnt);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>w>>l;
    for(int i=0;i<l;++i){
        for(int j=0;j<w;++j){
            cin>>arr[i][j];
            if(arr[i][j]=='T')dp[i][j]=0;
            else dp[i][j]=1;
        }
    }
    for(int i=0;i<l;++i){
        for(int j=0;j<w;++j){
            if(dp[i][j]==0)continue;
            if(i>0 and j>0)dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
            mx=max(mx,dp[i][j]);
        }
    }
    if(mx==0){
        cout<<"0 0";
        return 0;
    }
    for(int i=0;i<l;++i){
        for(int j=0;j<w;++j){
            if(dp[i][j]==mx)solve(i,j);
        }
    }
    cout<<mx*mx<<" "<<mn;
    return 0;
}