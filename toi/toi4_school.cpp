#include<bits/stdc++.h>
using namespace std;
int w,l;
char arr[64][64];
int dp[64][64];
int mx;
int mn=2e9;
bool visited[64][64];
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};
void dfs(int I,int J,int I0,int J0,int Il,int Jw){
    if(I<I0 or I>Il or J<J0 or J>Jw)return ;
    if(visited[I][J])return ;
    visited[I][J]=true;
    for(int k=0;k<4;++k){
        int ni=I+di[k];
        int nj=J+dj[k];
        if(ni<I0 or ni>Il or nj<J0 or nj>Jw)continue;
        if(arr[ni][nj]=='P' and !visited[ni][nj])dfs(ni,nj,I0,J0,Il,Jw);
    }
    return ;
}
void find(int I,int J){
    int cnt=0;
    for(int i=I-mx+1;i<=I;++i){
        for(int j=J-mx+1;j<=J;++j){
            if(arr[i][j]=='P' and !visited[i][j]){
                ++cnt;
                dfs(i,j,I-mx+1,J-mx+1,I,J);
            }
        }
    }
    //cout<<cnt<<" ";
    mn=min(mn,cnt);
    memset(visited,false,sizeof(visited));
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>w>>l;
    for(int i=0;i<l;++i){
        for(int j=0;j<w;++j){
            cin>>arr[i][j];
            if(arr[i][j]=='T'){
                dp[i][j]=0;
                continue;
            }
            if(i>0 and j>0)dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
            else dp[i][j]=1;
            mx=max(mx,dp[i][j]);
        }
    }
    if(mx==0){
        cout<<"0 0";
        return 0;
    }
    for(int i=0;i<l;++i){
        for(int j=0;j<w;++j){
            if(dp[i][j]==mx)find(i,j);
        }
    }
    cout<<mx*mx<<" "<<mn;
    return 0;
}