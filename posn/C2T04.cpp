#include<bits/stdc++.h>
using namespace std;
const int N=1e6+5;
int n;
int arr[N];
int res;
vector<pair<int,int>> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=n-1;i>=0;--i){
        int cnt=0;
        while(!v.empty() and arr[i]<v.back().first){
            ++cnt;
            cnt=max(cnt,v.back().second);
            v.pop_back();
        }
        res=max(res,cnt);
        v.emplace_back(arr[i],cnt);
    }
    cout<<res;
    return 0;
}