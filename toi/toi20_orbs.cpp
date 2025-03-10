#include<bits/stdc++.h>
using namespace std;
int n,l,a,b;
vector<int> v;
multiset<int> s1,s2,s3;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>l>>a>>b;
    for(int i=0;i<n;++i){
        int w;
        cin>>w;
        v.emplace_back(w);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<a;++i){
        s1.insert(v[i]);
    }
    for(int i=a;i<b-1;++i){
        s2.insert(v[i]);
    }
    for(int i=b-1;i<n;++i){
        s3.insert(v[i]);
    }
    while(l--){
        int x=*s1.rbegin();
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