#include<bits/stdc++.h>
using namespace std;
int n;
vector<int> v[3];
void print(){
    for(int i=n-1;i>=0;--i){
        for(int j=0;j<3;++j){
            for(int k=0;k<2*n-1;++k){
                if(i<v[j].size()){
                    for(int a=0;a<n-v[j][i];++a){
                        cout<<".";
                    }
                    for(int a=0;a<2*v[j][i]-1;++a){
                        cout<<"=";
                    }
                    for(int a=0;a<n-v[j][i];++a){
                        cout<<".";
                    }
                    goto t;
                }
                else if((k-n+1)%(2*n)==0)cout<<"|";
                else cout<<".";
            }
            t:;
            if(j!=2)cout<<".";
        }
        cout<<"\n";
    }
    for(int i=0;i<3*(2*n-1)+2;++i){
        cout<<"-";
    }
    cout<<"\n";
    return ;
}
void solve(int i,int a,int b,int c){
    if(i==0)return;
    solve(i-1,a,c,b);
    v[b].emplace_back(v[a].back());
    v[a].pop_back();
    print();
    solve(i-1,c,b,a);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=n;i>=1;--i){
        v[0].emplace_back(i);
    }
    print();
    solve(n,0,2,1);
    return 0;
}