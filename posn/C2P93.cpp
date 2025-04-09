#include<bits/stdc++.h>
using namespace std;
const int N=2005;
int n;
queue<string> q;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    q.emplace("1");
    while(n--){
        string str=q.front();
        string str2=q.front();
        cout<<q.front()<<" ";
        q.pop();
        str+="0";
        str2+="1";
        q.emplace(str);
        q.emplace(str2);
    }
    return 0;
}