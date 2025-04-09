#include<bits/stdc++.h>
using namespace std;
int n,k;
map<int,int> mp;
int arr[100005];
bool pass;
int res;
int qs[100005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k;
    for(int i=1;i<=n;++i){
        int s;
        cin>>s;
        if(s<k)arr[i]=-1;
        else if(s>k)arr[i]=1;
        else arr[i]=0;
        qs[i]=qs[i-1]+arr[i];
    }
    ++mp[0];
    for(int i=1;i<=n;++i){
        if(arr[i]==0)pass=true;
        if(pass)res+=mp[qs[i]];
        else ++mp[qs[i]];
    }
    cout<<res;
    return 0;
}