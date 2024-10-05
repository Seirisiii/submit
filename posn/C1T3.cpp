#include<bits/stdc++.h>
using namespace std;
int n;
int i;
int arr[10];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    do{
        arr[i]=n%2;
        n/=2;
        ++i;
    }while(n);
    for(int j=i-1;j>=0;--j){
        cout<<arr[j];   
    }
    return 0;
}
