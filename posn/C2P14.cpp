#include<bits/stdc++.h>
using namespace std;
int m,n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    int arr[n+5]={};
    while(true){
        if(m/2>=n)break;
        m*=2;
    }
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<m;++i){
        bool ch=true;
        for(int j=0;j<n;++j){
            if(arr[j]%m==i){
                cout<<arr[j]<<" ";
                ch=false;
            }
        }
        if(ch)cout<<"empty";
        cout<<"\n";
    }
    return 0;
}