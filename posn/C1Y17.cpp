#include<bits/stdc++.h>
using namespace std;
int n;
void solve(int n){
    if(n==0){
        cout<<0;
        return ;
    }
    if(n<0){
        cout<<"error";
        return ;
    }
    int arr[32];
    int i=0;
    while(n){
        arr[i]=n%2;
        n/=2;
        ++i;
    }
    for(int j=i-1;j>=0;--j){
        cout<<arr[j];
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    solve(n);
    return 0;
}

