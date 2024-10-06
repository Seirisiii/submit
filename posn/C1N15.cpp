#include<bits/stdc++.h>
using namespace std;
int arr[10];
int sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<10;++i){
        cin>>arr[i];
    }
    int *ptr=arr;
    for(int i=0;i<10;++i){
        if(*(ptr+i)%2==0)sum+=*(ptr+i);
    }
    cout<<sum;
    return 0;
}
