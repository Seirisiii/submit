#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m;
int arr[N];
int parent[N];
int find_parent(int i){
    if(i==parent[i])return i;
    return parent[i]=find_parent(parent[i]);
}
void union_parent(int u,int v){
    if(arr[u]>arr[v]){
        arr[u]+=(arr[v]/2);
        parent[v]=u;
        cout<<u<<"\n";
    }
    else if(arr[u]<arr[v]){
        arr[v]+=(arr[u]/2);
        parent[u]=v;
        cout<<v<<"\n";
    }
    else if(arr[u]==arr[v]){
        if(u<v){
            arr[u]+=(arr[v]/2);
            parent[v]=u;
            cout<<u<<"\n";
        }
        else{
            arr[v]+=(arr[u]/2);
            parent[u]=v;
            cout<<v<<"\n";
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
        parent[i]=i;
    }
    while(m--){
        int u,v;
        cin>>u>>v;
        u=find_parent(u);
        v=find_parent(v);
        if(u==v){
            cout<<"-1\n";
            continue;
        }
        union_parent(u,v);
    }
    return 0;
}