#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n==1){
        cout<<"A";
        return 0;
    }
    int a1=4*n-7;
    int a2=4*n-4;
    int l=0,r=2*n-2;
    for(int i=0;i<n-1;++i){
        for(int j=0;j<2*n-1;++j){
            if(j==l)cout<<a1%10;
            else if(j==r)cout<<a2%10;
            else cout<<" ";
        }
        cout<<"\n";
        a1-=4;
        a2-=4;
        ++l;
        --r;
    }
    char c='A'-1+(n%26);
    if(n%26==0)c='Z';
    for(int i=0;i<n-1;++i){
        cout<<" ";
    }
    cout<<c<<"\n";
    int a3=3;
    int a4=2;
    --l;
    ++r;
    for(int i=0;i<n-1;++i){
        for(int j=0;j<2*n-1;++j){
            if(j==l)cout<<a3%10;
            else if(j==r)cout<<a4%10;
            else cout<<" ";
        }
        cout<<"\n";
        a3+=4;
        a4+=4;
        --l;
        ++r;
    }
    return 0;
}
