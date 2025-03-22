#include<bits/stdc++.h>
using namespace std;
const int MAX=21;
int n,m;
bool visited[MAX][MAX];
int di[4]={1,-1,0,0};
int dj[4]={0,0,1,-1};
bool ch;
vector<pair<int,int>> v;
void solve(int i,int j,int cnt){
    if(i<1 or i>n or j<1 or j>m)return ;
    if(ch)return ;
    if(i==n and j==m and cnt==n*m){
        ch=true;
        cout<<"Yes\n";
        for(auto [I,J]:v){
            cout<<I<<" "<<J<<"\n";
        }
        return ;
    }
    visited[i][j]=true;
    for(int k=0;k<4;++k){
        int ni=i+di[k];
        int nj=j+dj[k];
        if(ni<1 or ni>n or nj<1 or nj>m)continue;
        if(visited[ni][nj])continue;
        v.emplace_back(ni,nj);
        solve(ni,nj,cnt+1);
        v.pop_back();
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    v.emplace_back(1,1);
    solve(1,1,1);
    if(!ch)cout<<"No";
    return 0;
}