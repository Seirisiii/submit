#include<bits/stdc++.h>
using namespace std;
int l;
int n;
string s;
bool check;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>l;
    cin>>n;
    cin>>s;
    while(--n){
        string str;
        cin>>str;
        if(!check){
            int cnt=0;
            for(int i=0;i<l;++i){
                if(s[i]==str[i])++cnt;
            }
            if(cnt>=l-2)s=str;
            else check=true;
        }
    }
    cout<<s;
    return 0;
}