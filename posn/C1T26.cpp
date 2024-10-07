#include<bits/stdc++.h>
using namespace std;
int n;
string str;
vector<char> v;
set<string> s;
void solve(int N){
    if(N==0){
        if(v.empty())return ;
        string ans;
        char prev=v[v.size()-1];
        for(int i=v.size()-2;i>=0;--i){
            if(prev==v[i])continue;
            ans+=prev;
            prev=v[i];
        }
        ans+=prev;
        if(ans.length()==1){
            s.insert(ans);
            return ;
        }
        if(ans[0]=='0')ans.erase(0,1);
        s.insert(ans);
        return ;
    }
    solve(N-1);
    v.emplace_back(str[N-1]);
    solve(N-1);
    v.pop_back();
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>str;
    solve(n);
    cout<<s.size();
    return 0;
}
