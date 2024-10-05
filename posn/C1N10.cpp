#include<bits/stdc++.h>
using namespace std;
int even,odd;
int mxodd,mxeven;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=10;
    while(n--){
        int x;
        cin>>x;
        if(x%2==0){
            ++even;
            mxeven=max(mxeven,x);
        }
        else{
            ++odd;
            mxodd=max(mxodd,x);
        }
    }
    cout<<odd<<"\n"<<even<<"\n"<<mxodd<<"\n"<<mxeven;
    return 0;
}


