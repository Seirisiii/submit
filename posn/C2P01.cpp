#include<bits/stdc++.h>
using namespace std;
string s;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    string ans;
    for(auto i:s){
        bool ch=true;
        for(int j=0;j<ans.size();++j){
            if(ans[j]>=i){
                ans[j]=i;
                ch=false;
                break;
            }
        }
        if(ch)ans.push_back(i);
    }
    cout<<ans.size();
    return 0;
}