#include<bits/stdc++.h>
using namespace std;
int n;
stack<int> s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=1;i<=sqrt(n);++i){
        if(i*i==n)cout<<i<<" ";
        else if(n%i==0){
            cout<<i<<" ";
            s.push(n/i);
        }
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}