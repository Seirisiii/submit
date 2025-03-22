#include<bits/stdc++.h>
using namespace std;
int n;
int arr[1000];
int sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n%2==0){
        arr[2]=1;
        if(n==2)cout<<2;
        else cout<<2<<"x";
        n/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2) {
        while(n%i==0){
            if(n/i==1){
                cout<<i;
                arr[i]=1;
            }
            else{
                cout<<i<<"x";
                arr[i]=1;
            }
            n/=i;
        }
    }
    if(n>2){
        cout<<n;
        arr[n]=1;
    }
    for(int i=0;i<1000;++i){
        sum+=arr[i];
    }
    cout<<"\n"<<sum;
    return 0;
}

