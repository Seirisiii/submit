#include<bits/stdc++.h>
using namespace std;
int n;

int ans;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n<=0 or n>100)cout<<"Error";
    else{
        int arr[100]={};
        for(int i=0;i<n;++i){
            cin>>arr[i];
            if(arr[i]<-100 or arr[i]>100){
                cout<<"Error";
                return 0;
            }
        }
        int *ptr=arr;
        int x;
        cin>>x;
        for(int i=0;i<n;++i){
            if(*(ptr+i)==x){
                cout<<i;
                return 0;
            }
        }
        cout<<"Error";
    }
    return 0;
}
