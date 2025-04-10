#include<bits/stdc++.h>
using namespace std;
int TC=5;
void runcase(){
    int res=0;
    string s;
    cin>>s;
    for(int i=1;i<=s.size();++i){
        if(s.size()%i!=0)continue;
        int sz=s.size()/i;
        bool ans=true;
        for(int j=0;j<sz;++j){
            for(int k=j+sz;k<s.size();k+=sz){
                if(s[j]!=s[k]){
                    ans=false;
                    break;
                }
            }
            if(!ans)break;
        }
        if(ans)++res;
    }
    cout<<res<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(TC--)runcase();
    return 0;
}