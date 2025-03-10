#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int n;
pair<int,int> p[N];
bool compare(pair<int,int> a,pair<int,int> b){
    if(a.first!=b.first)return a.first>b.first;
    return a.second<b.second;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n,compare);
    int mx=0;
    for(int i=0;i<n;++i){
        if(mx<=p[i].second){
            mx=p[i].second;
            cout<<p[i].first<<" "<<p[i].second<<"\n";
        }
    }
    return 0;
}