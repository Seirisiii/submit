#include<bits/stdc++.h>
using namespace std;
int n;
int s[21],h[21];
int mxi,mxj;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s[i]>>h[i];
        mxi=max(mxi,h[i]);
        mxj=max(mxj,s[i]+h[i]*2-1);
    }
    char arr[mxi][mxj]={};
    memset(arr,'.',sizeof(arr));
    for(int k=0;k<n;++k){
        int l=s[k]-1;
        int r=s[k]+h[k]*2-2;
        for(int i=mxi-1;i>=mxi-h[k];--i){
            for(int j=l+1;j<r;++j){
                arr[i][j]='X';
            }
            if(arr[i][l]=='.')arr[i][l]='/';
            else if(arr[i][l]=='\\')arr[i][l]='v';
            if(arr[i][r]=='.')arr[i][r]='\\';
            else if(arr[i][r]=='/')arr[i][r]='v';
            ++l;
            --r;
        }
    }
    for(int i=0;i<mxi;++i){
        for(int j=0;j<mxj;++j){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}