#include<bits/stdc++.h>
using namespace std;
int n,m;
int dun[100][100][100];
int q;
int power[100];
int solve(int idx,int I,int J){
    if(I>=m or J>=m)return 1e9;
    if(I==m-1 and J==m-1)return dun[idx][I][J];
    int down=solve(idx,I+1,J)+dun[idx][I][J];
    int right=solve(idx,I,J+1)+dun[idx][I][J];
    return min(down,right);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            for(int k=0;k<m;++k){
                cin>>dun[i][j][k];
            }
        }
        power[i]=solve(i,0,0);
    }
    cin>>q;
    while(q--){
        int hp;
        cin>>hp;
        bool check=false;
        for(int i=0;i<n;++i){
            if(hp<power[i]){
                check=true;
                cout<<i+1<<"\n";
                break;
            }
            hp-=power[i];
        }
        if(!check)cout<<"Cleared\n";
    }
    return 0;
}