#include<bits/stdc++.h>
using namespace std;
const int MAX=2e5+5;
int n,q;
int arr[MAX];
int tree[4*MAX];
void build(int node,int l,int r){
    if(l>r)return ;
    if(l==r){
        tree[node]=arr[l];
        return ;
    }
    build(node*2,l,(l+r)/2);
    build(node*2+1,(l+r)/2+1,r);
    tree[node]=min(tree[node*2],tree[node*2+1]);
    return ;
}
void update(int node,int l,int r,int i,int j,int val){
    if(l>r or i>r or j<l)return ;
    if(l==r){
        tree[node]=val;
        return ;
    }
    update(node*2,l,(l+r)/2,i,j,val);
    update(node*2+1,(l+r)/2+1,r,i,j,val);
    tree[node]=min(tree[node*2],tree[node*2+1]);
    return ;
}
int query(int node,int l,int r,int i,int j){
    if(l>r or l>j or r<i)return INT_MAX;
    if(l>=i and r<=j)return tree[node];
    int q1=query(node*2,l,(l+r)/2,i,j);
    int q2=query(node*2+1,(l+r)/2+1,r,i,j);
    return min(q1,q2);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>q;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    build(1,1,n);
    while(q--){
        int x;
        cin>>x;
        if(x==1){
            int k,u;
            cin>>k>>u;
            update(1,1,n,k,k,u);
        }
        else if(x==2){
            int a,b;
            cin>>a>>b;
            cout<<query(1,1,n,a,b)<<"\n";
        }
    }
    
    return 0;
}