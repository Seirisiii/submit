#include<bits/stdc++.h>
using namespace std;
string P;
int n;
string solve(int idx,string p){
    vector<string> v;
    string tmp="";
    int bracket=0;
    for(auto i:p){
        if(i=='(')++bracket;
        else if(i==')')--bracket;
        if(bracket==0 and i=='+'){
            v.emplace_back(tmp);
            tmp="";
            continue;
        }
        tmp+=i;
    }
    if(!v.empty())v.emplace_back(tmp);
    if(v.empty()){
        tmp="";
        bracket=0;
        for(auto i:p){
            if(i=='(')++bracket;
            else if(i==')')--bracket;
            if(bracket==0 and i=='*'){
                v.emplace_back(tmp);
                tmp="";
                continue;
            }
            tmp+=i;
        }
        if(!v.empty())v.emplace_back(tmp);
    }
    if(v.empty()){
        tmp="";
        bracket=0;
        for(auto i:p){
            if(i=='(')++bracket;
            else if(i==')')--bracket;
            if(bracket==0 and i=='^'){
                v.emplace_back(tmp);
                tmp="";
                continue;
            }
            tmp+=i;
        }
        if(!v.empty())v.emplace_back(tmp);
    }
    if(v.empty()){
        tmp=p;
        if(tmp[0]=='(' and tmp[tmp.length()-1]==')'){
            tmp.erase(0,1);
            tmp.erase(tmp.length()-1);
            v.emplace_back(tmp);
        }
    }
    if(v.size()>=idx)return v[idx-1];
    if(idx==1)return p;
    return "null";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>P;
    cin>>n;
    while(n--){
        int x;
        string p=P;
        stack<int> s;
        while(cin>>x and x!=0){
            s.push(x);
            p=solve(x,p);
        }
        string str="p";
        while(!s.empty()){
            cout<<"op("<<s.top()<<",";
            s.pop();
            str+=')';
        }
        cout<<str<<"="<<p<<"\n";
    }
    return 0;
}