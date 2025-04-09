#include<bits/stdc++.h>
using namespace std;
int TC;
void runcase(){
    int res=1;
    int sum=0;
    int mx=0;
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=1;i<=n;++i){
        int x;
        cin>>x;
        if(mp.find(x)!=mp.end()){
            mx=max(mx,mp[x]);
            sum=i-mx-1;
        }
        ++sum;
        mp[x]=i;
        res=max(res,sum);
    }
    cout<<res<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}