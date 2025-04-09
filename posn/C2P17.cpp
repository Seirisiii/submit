#include<bits/stdc++.h>
using namespace std;
int TC,p;
void runcase(){
    int res=0;
    vector<int> v;
    int arr[p+5]={};
    for(int i=0;i<p;++i){
        cin>>arr[i];
    }
    for(int i=p-1;i>=0;--i){
        v.emplace_back(arr[i]);
    }
    for(int i=0;i<p;++i){
        int it=0;
        int mx=0;
        for(int j=0;j<p-i;++j){
            if(v[j]>mx){
                mx=v[j];
                it=j;
            }
        }
        if(it==p-i-1);
        else if(it==0){
            for(int j=0;j<(p-i)/2;++j){
                swap(v[j],v[p-i-j-1]);
            }
            ++res;
        }
        else{
            for(int j=it;j<(p-i+it)/2;++j){
                swap(v[j],v[p-i+it-j-1]);
            }
            ++res;
        }
        v.pop_back();
    }
    cout<<res<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC>>p;
    while(TC--)runcase();
    return 0;
}