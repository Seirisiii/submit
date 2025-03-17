#include<bits/stdc++.h>
using namespace std;
const int N=2e6+1;
int n,l;
int a,b;
int arr[N];
multiset<int> ms1,ms2,ms3;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>l;
    cin>>a>>b;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<a;++i){
        ms1.insert(arr[i]);
    }
    for(int i=a;i<b-1;++i){
        ms2.insert(arr[i]);
    }
    for(int i=b-1;i<n;++i){
        ms3.insert(arr[i]);
    }
    while(l--){
        int x=*ms1.rbegin();
        int y=*ms3.begin();
        int mn=min(y-x,(x+y)/2);
        int mx=max(y-x,(x+y)/2);
        ms1.erase(prev(ms1.end()));
        ms3.erase(ms3.begin());
        if(!ms2.empty() and mn>*ms2.begin()){
            ms1.insert(*ms2.begin());
            ms2.erase(ms2.begin());
            ms2.insert(mn);
        }
        else ms1.insert(mn);
        if(!ms2.empty() and mx<*ms2.rbegin()){
            ms3.insert(*ms2.rbegin());
            ms2.erase(prev(ms2.end()));
            ms2.insert(mx);
        }
        else ms3.insert(mx);
    }
    for(auto i:ms1)cout<<i<<" ";
    for(auto i:ms2)cout<<i<<" ";
    for(auto i:ms3)cout<<i<<" ";
    return 0;
}