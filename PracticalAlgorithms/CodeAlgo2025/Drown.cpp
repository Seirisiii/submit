#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int N,M;
ll H;
ll T,P;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>N>>M>>H;
    cin>>T>>P;
    vector<map<ll,ll>> positions(N+1);
    for(int i=0;i<M;++i){
        int x;
        ll t,h;
        cin>>x>>t>>h;
        positions[x][t]=h;
    }
    for(int i=1;i<=N;++i){
        positions[i][0]=0;
    }
    vector<int> res;
    for(int i=1;i<=N;++i){
        vector<pair<ll,ll>> v;
        for(auto [t,h]:positions[i]){
            v.push_back({t,h});
        }
        bool drowned=false;
        bool reached_top=false;
        for(int j=0;j<v.size();++j){
            ll curr_t=v[j].first;
            ll curr_h=v[j].second;
            if(curr_h>=H){
                reached_top=true;
                break;
            }
            if(curr_t>=T){
                ll p=P*(curr_t-T+1);
                if(curr_h<p){
                    drowned=true;
                    break;
                }
            }
            if(j<v.size()-1){
                ll next_t=v[j+1].first;
                for(ll t=curr_t+1;t<next_t;++t){
                    if(t>=T){
                        ll p=P*(t-T+1);
                        if(curr_h<p){
                            drowned=true;
                            break;
                        }
                    }
                }
            }
            if(drowned)break;
        }
        if(!drowned and reached_top)res.push_back(i);
    }
    cout<<res.size()<<"\n";
    for(auto i:res){
        cout<<i<<" ";
    }
    return 0;
}