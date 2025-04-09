#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
int n,m;
int parent[N];
int parent_rank[N];
double parent_ratio[N];
int find_parent(int i){
    if(parent[i]==i)return i;
    int v=parent[i];
    parent[i]=find_parent(v);
    parent_ratio[i]*=parent_ratio[v];
    return parent[i];
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(4)<<scientific; 
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        parent[i]=i;
        parent_rank[i]=1;
        parent_ratio[i]=1.0;
    }
    while(m--){
        char c;
        cin>>c;
        if(c=='A'){
            int i,x,j,y;
            cin>>i>>x>>j>>y;
            int ni=find_parent(i);
            int nj=find_parent(j);
            if(ni==nj)cout<<"Already Known\n";
            else{
                if(parent_rank[ni]>=parent_rank[nj]){
                    parent_ratio[nj]=parent_ratio[i]/parent_ratio[j]*y/x;
                    parent[nj]=ni;
                    parent_rank[ni]+=parent_rank[nj];
                }
                else{
                    parent_ratio[ni]=parent_ratio[j]/parent_ratio[i]*x/y;
                    parent[ni]=nj;
                    parent_rank[nj]+=parent_rank[ni];
                }
            }
        }
        else if(c=='T'){
            int a,b,c;
            cin>>a>>b>>c;
            if(a==b){
                cout<<0.0<<"\n";
                continue;
            }
            int na=find_parent(a);
            int nb=find_parent(b);
            int nc=find_parent(c);
            if(na==nb and na==nc and nb==nc){
                double ac=parent_ratio[c]/parent_ratio[a];
                double bc=parent_ratio[c]/parent_ratio[b];
                cout<<abs(ac-bc)<<"\n";
            }
            else cout<<"Insufficient Data\n";
        }
    }
    cout<<setprecision(6)<<defaultfloat; 
    return 0;
}