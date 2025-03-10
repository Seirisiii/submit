#include<bits/stdc++.h>
using namespace std;
int a,b;
char arr[100][100];
queue<tuple<int,int,int>> q;
bool visited[100][100];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    for(int i=0;i<a;++i){
        for(int j=0;j<b;++j){
            cin>>arr[i][j];
        }
    }
    q.emplace(1,0,0);
    while(!q.empty()){
        auto [cnt,i,j]=q.front();
        q.pop();
        if(visited[i][j]){
            cout<<cnt<<"\n"<<i+1<<" "<<j+1;
            return 0;
        }
        visited[i][j]=true;
        if(j+1<b)if(!visited[i][j+1] and (arr[i][j]=='B' or arr[i][j]=='R'))q.emplace(cnt+1,i,j+1);
        if(i+1<a)if(!visited[i+1][j] and (arr[i][j]=='B' or arr[i][j]=='D'))q.emplace(cnt+1,i+1,j);
        if(j-1>=0)if(!visited[i][j-1] and (arr[i][j-1]=='B' or arr[i][j-1]=='R'))q.emplace(cnt+1,i,j-1);
        if(i-1>=0)if(!visited[i-1][j] and (arr[i-1][j]=='B' or arr[i-1][j]=='D'))q.emplace(cnt+1,i-1,j);
    }
    return 0;
}