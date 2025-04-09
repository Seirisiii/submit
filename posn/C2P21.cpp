#include<bits/stdc++.h>
using namespace std;
int TC;
void solve(int n,vector<tuple<int,string,string>> t){
    if(n==2){
        int in=0;
        int level1=get<0>(t[0]);
        int level2=get<0>(t[1]);
        if(level1>level2)in=0;
        else if(level1<level2)in=1;
        else{
            string e1=get<1>(t[0]);
            string e2=get<1>(t[1]);
            if(e1=="fire" and e2=="wood")in=0;
            else if(e1=="fire" and e2=="water")in=1;
            else if(e1=="wood" and e2=="water")in=0;
            else if(e1=="wood" and e2=="fire")in=1;
            else if(e1=="water" and e2=="fire")in=0;
            else if(e1=="water" and e2=="wood")in=1;
        }
        if(in==0)cout<<get<2>(t[0])<<" "<<get<0>(t[0])<<" "<<get<1>(t[0])<<" vs "<<get<2>(t[1])<<" "<<get<0>(t[1])<<" "<<get<1>(t[1])<<"\n";
        else cout<<get<2>(t[1])<<" "<<get<0>(t[1])<<" "<<get<1>(t[1])<<" vs "<<get<2>(t[0])<<" "<<get<0>(t[0])<<" "<<get<1>(t[0])<<"\n";
        return ;
    }
    int idx=n;
    if(n%2==1)--idx;
    vector<tuple<int,string,string>> v;
    for(int i=0;i<idx;i+=2){
        tuple<int,string,string> k;
        int level1=get<0>(t[i]);
        int level2=get<0>(t[i+1]);
        if(level1>level2)k=t[i];
        else if(level1<level2)k=t[i+1];
        else{
            string e1=get<1>(t[i]);
            string e2=get<1>(t[i+1]);
            if(e1=="fire" and e2=="wood")k=t[i];
            else if(e1=="fire" and e2=="water")k=t[i+1];
            else if(e1=="wood" and e2=="water")k=t[i];
            else if(e1=="wood" and e2=="fire")k=t[i+1];
            else if(e1=="water" and e2=="fire")k=t[i];
            else if(e1=="water" and e2=="wood")k=t[i+1];
        }
        v.emplace_back(k);
    }
    if(n%2==1)v.emplace_back(t[n-1]);
    int sv=v.size();
    solve(sv,v);
    return ;
}
void runcase(){
    int n;
    cin>>n;
    vector<tuple<int,string,string>> t;
    for(int i=0;i<n;++i){
        string name,element;
        int level,ele;
        cin>>name>>level>>element;
        t.emplace_back(level,element,name);
    }
    solve(n,t);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}