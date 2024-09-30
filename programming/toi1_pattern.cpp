#include<bits/stdc++.h>
using namespace std;
int n;
int mxi;
char arr[50000][70]; 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    memset(arr,'o',sizeof(arr));
    cin>>n;
    for(int i=0;i<n;++i){
        int p,q,r;
        cin>>p>>q>>r;
        mxi=max(mxi,p);
        for(int j=q-1;j<q+r-1 and j<70;++j){
            arr[p-1][j]='x';
        }
    }
    for(int i=0;i<mxi;++i){
        for(int j=0;j<70;++j){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}