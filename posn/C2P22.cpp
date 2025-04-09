#include<bits/stdc++.h>
using namespace std;
using ll=long long;
const int N=730005;
int n,s;
ll arr[N];
vector<ll> cnt[10];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    if(s==1){
        ll t=1;
        while(true){
            bool check=true;
            for(int i=0;i<n;++i){
                int num=(arr[i]/t)%10;
                if(num!=0)check=false;
                cnt[num].emplace_back(arr[i]);
            }
            int idx=0;
            for(int i=0;i<10;++i){
                for(auto j:cnt[i]){
                    if(idx>=n)break;
                    arr[idx]=j;
                    ++idx;
                }
                cnt[i].clear();
            }
            t*=10;
            if(check)break;
            for(int i=0;i<n;++i)cout<<arr[i]<<" ";
            cout<<"\n";
        }
    }
    else{
        sort(arr,arr+n);
        for(int i=0;i<n;++i){
            cout<<arr[i]<<" ";
        }
    }
    return 0;
}