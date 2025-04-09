#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int k;
        bool check=false;
        cin>>k;
        string s;
        cin>>s;
        while(--k){
            string str;
            cin>>str;
            if(s==str)check=true;
            if(!check){
                int sz=s.length();
                int strz=str.length();
                if(sz==strz){
                    int cnt=0;
                    for(int i=0;i<sz;++i){
                        if(s[i]==str[i])++cnt;
                    }
                    if(cnt>=sz-1)s=str;
                    else check=true;
                }
                else{
                    int cnt=0;
                    int ch1[27]={};
                    int ch2[27]={};
                    for(auto i:s){
                        ++ch1[i-'a'];
                    }
                    for(auto i:str){
                        ++ch2[i-'a'];
                    }
                    for(int i=0;i<26;++i){
                        cnt+=abs(ch1[i]-ch2[i]);
                    }
                    if(cnt>=2)check=true;
                }
            }
            s=str;
        }
        if(!check)cout<<"T\n";
        else cout<<"F\n";
    }
    return 0;
}