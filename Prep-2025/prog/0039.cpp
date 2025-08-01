#include<bits/stdc++.h>
using namespace std;
int n;
int m;
bool check[10];
bool visited[10];
vector<int> v;
void permutation(int idx){
    if(idx==n){
        for(auto i:v){
            cout<<i<<" ";
        }
        cout<<"\n";
        return ;
    }
    for(int i=1;i<=n;++i){
        if(visited[i])continue;
        if(idx==0 and check[i])continue;
        v.emplace_back(i);
        visited[i]=true;
        permutation(idx+1);
        v.pop_back();
        visited[i]=false;
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>m;
    while(m--){
        int x;
        cin>>x;
        check[x]=true;
    }
    permutation(0);
    return 0;
}