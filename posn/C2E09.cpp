#include<bits/stdc++.h>
using namespace std;
int TC;
map<char,char> mpset;
void runcase(){
    map<string,int> mp;
    int n;
    cin>>n;
    for(int i=0;i<n;++i){
        string s;
        string str="";
        cin>>s;
        for(auto j:s){
            if(j=='-')continue;
            str+=mpset[j];
            if(str.size()==3)str+='-';
        }
        ++mp[str];
    }
    bool ch=false;
    for(auto i:mp){
        if(i.second>1){
            cout<<i.first<<" "<<i.second<<"\n";
            ch=true;
        }
    }
    if(!ch)cout<<"No\n";
    cout<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char cnt='2';
    int idx=0;
    for(char c='A';c<='Y';++c){
        if(c=='Q')continue;
        mpset[c]=cnt;
        ++idx;
        if(idx==3){
            idx=0;
            ++cnt;
        }
    }
    for(char c='0';c<='9';++c){
        mpset[c]=c;
    }
    cin>>TC;
    while(TC--)runcase();
    return 0;
}