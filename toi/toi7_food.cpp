#include<bits/stdc++.h>
using namespace std;
int n,m;
bool food[9];
bool choose[9];
vector<int> permutation;
void solve(int k){
    if(k==n){
        for(auto i:permutation){
            cout<<i<<" ";
        }
        cout<<"\n";
        return ;
    }
    for(int i=1;i<=n;++i){
        if((k==0 and food[i]) or choose[i])continue;
        permutation.emplace_back(i);
        choose[i]=true;
        solve(k+1);
        permutation.pop_back();
        choose[i]=false;
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
        food[x]=true;
    }
    solve(0);
    return 0;
}