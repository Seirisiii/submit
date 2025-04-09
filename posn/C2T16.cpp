#include<bits/stdc++.h>
using namespace std;
using ll=long long;
int n;
ll arr[500005];
ll qs[500005];
ll dp[500005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    map<ll,vector<int>> mp;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
        qs[i]=qs[i-1]+arr[i];
        mp[arr[i]].push_back(i);
    }
    set<int> s;
    for(auto i=mp.rbegin();i!=mp.rend();++i){
        int curr=i->first;
        for(auto pos:i->second){
            bool can=false;
            if((pos-1>=1 and arr[pos-1]<curr) or (pos+1<=n and arr[pos+1]<curr))can=true;
            if(can){
                int l=0,r=n+1;
                auto it=s.upper_bound(pos);
                if(it!=s.end())r=*it;
                if(it!=s.begin())--it,l=*it;
                dp[pos]=qs[r-1]-qs[l];
                if(l!=0 and dp[pos]>arr[l])dp[pos]=max(dp[pos],dp[l]);
                if(r!=n+1 and dp[pos]>arr[r])dp[pos]=max(dp[pos],dp[r]);
            }
            else dp[pos]=curr;
        }
        for(auto pos:i->second){
            s.insert(pos);
        }
    }
    for(int i=1;i<=n;++i){
        cout<<dp[i]<<" ";
    }
    return 0;
}