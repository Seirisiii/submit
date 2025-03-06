#include<bits/stdc++.h>
using namespace std;
int n,m;
queue<int> q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        q.emplace(i);
    }
    int in=1;
    while(!q.empty()){
        if(in==m){
            in=0;
            cout<<q.front()<<" ";
            q.pop();
        }
        else{
            q.emplace(q.front());
            q.pop();
        }
        ++in;
    }
    return 0;
}