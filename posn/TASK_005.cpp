#include<bits/stdc++.h>
using namespace std;
int n,m;
pair<int,int> buy[1001],sell[1001];
int res;
int bi,si;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=1;i<=1000;++i){
        buy[i]={INT_MAX,0};
    }
    cin>>n>>m;
    for(int i=1;i<=n;++i){
        int a,b;
        cin>>a>>b;
        if(buy[a].first>b)buy[a]={b,i};
    }
    for(int i=1;i<=m;++i){
        int c,d;
        cin>>c>>d;
        if(sell[c].first<d)sell[c]={d,i};
    }
    for(int i=1;i<=1000;++i){
        if(buy[i].first==INT_MAX)continue;
        for(int j=i;j<=1000;++j){
            if(res<sell[j].first-buy[i].first){
                res=sell[j].first-buy[i].first;
                bi=buy[i].second;
                si=sell[j].second;
            }
        }
    }
    if(res>0)cout<<res<<"\n"<<bi<<" "<<si;
    else cout<<0;
    return 0;
}
