#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[1000][1000];
bool visited[1000][1000];
int cnt=2;
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};
int ans1,ans2,ans3;
void bfs(int I,int J){
    int mxi=I,mni=I;
    int mxj=J,mnj=J;
    queue<pair<int,int>> q;
    q.emplace(I,J);
    while(!q.empty()){
        int i=q.front().first;
        int j=q.front().second;
        q.pop();
        if(visited[i][j])continue;
        visited[i][j]=true;
        arr[i][j]=cnt;
        mxi=max(mxi,i);
        mni=min(mni,i);
        mxj=max(mxj,j);
        mnj=min(mnj,j);
        for(int k=0;k<4;++k){
            int ni=i+di[k];
            int nj=j+dj[k];
            if(ni<0 or nj<0 or ni>=m or nj>=n)continue;
            if(arr[ni][nj]==1 and !visited[ni][nj])q.emplace(ni,nj);
        }
    }
    if(arr[mni][mnj]==cnt and arr[mxi][mnj]==cnt and arr[mni][mxj]==cnt and arr[mxi][mxj]==cnt)++ans1;
    else if(arr[mni][mnj]!=cnt and arr[mxi][mnj]!=cnt and arr[mni][mxj]!=cnt and arr[mxi][mxj]!=cnt)++ans2;
    else ++ans3;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            char c;
            cin>>c;
            if(c=='1')arr[i][j]=1;
        }
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j]==1){
                bfs(i,j);
                ++cnt;
            }
        }
    }
    cout<<ans1<<" "<<ans2<<" "<<ans3;
    return 0;
}