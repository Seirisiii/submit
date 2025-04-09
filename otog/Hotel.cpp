#include<bits/stdc++.h>
using namespace std;
int n;
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    res+=3000*(n/15);
    n%=15;
    if(n>=9)res+=3000;
    else{
        res+=1500*(n/5);
        n%=5;
        if(n==4)res+=1500;
        else if(n==3)res+=1300;
        else if(n==2)res+=800;
        else if(n==1)res+=500;
    }
    cout<<res;
    return 0;
}