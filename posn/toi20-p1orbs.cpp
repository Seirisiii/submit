#include<bits/stdc++.h>
using namespace std;
int n,l;
int a,b;
multiset<int> s1,s2,s3;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>l;
    cin>>a>>b;
    vector<int> v(n);
    for(auto &i:v)cin>>i;
    sort(v.begin(),v.end());
    for(int i=1;i<=a;++i){
        s1.insert(v[i-1]);
    }
    for(int i=a+1;i<b;++i){
        s2.insert(v[i-1]);
    }
    for(int i=b;i<=n;++i){
        s3.insert(v[i-1]);
    }
    while(l--){
        int x=*prev(s1.end());
        int y=*s3.begin();
        int mn=min(y-x,(x+y)/2);
        int mx=max(y-x,(x+y)/2);
        if(!s2.empty() and mn>*s2.begin()){
            s1.erase(prev(s1.end()));
            s1.insert(*s2.begin());
            s2.erase(s2.begin());
            s2.insert(mn);
        }
        else{
            s1.erase(prev(s1.end()));
            s1.insert(mn);
        }
        if(!s2.empty() and mx<*s2.rbegin()){
            s3.erase(s3.begin());
            s3.insert(*s2.rbegin());
            s2.erase(prev(s2.end()));
            s2.insert(mx);
        }
        else{
            s3.erase(s3.begin());
            s3.insert(mx);
        }
    }
    for(auto i:s1)cout<<i<<" ";
    for(auto i:s2)cout<<i<<" ";
    for(auto i:s3)cout<<i<<" ";
    return 0;
}