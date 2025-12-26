#include<bits/stdc++.h>
using namespace std;
string s;
bool zero;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>s;
    sort(s.begin(),s.end());
    int cnt=0;
    for(auto i:s){
        if(!zero){
            if(i=='0')++cnt;
            else{
                zero=true;
                cout<<i;
                while(cnt--)cout<<"0";
            }
        }
        else cout<<i;
    }
    return 0;
}