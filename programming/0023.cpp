#include<bits/stdc++.h>
using namespace std;
int d,m;
string s[7]={"Wednesday","Thursday","Friday","Saturday","Sunday","Monday","Tuesday"};
int arr[12]={0,31,59,90,120,151,181,212,243,273,304,334};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>d>>m;
    cout<<s[(arr[m-1]+d)%7];
    return 0;
}