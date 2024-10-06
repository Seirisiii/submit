#include<bits/stdc++.h>
using namespace std;
int n;
int arr[100];
int sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n>100 or n<=0){
        cout<<"Error";
        return 0;
    }
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    int *ptr=arr;
    for(int i=0;i<n;++i){
        if(*(ptr+i)<-100 or *(ptr+i)>100){
            cout<<"Error";
            return 0;
        }
        sum+=*(ptr+i);
    }
    cout<<sum;
    return 0;
}
