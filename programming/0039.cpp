#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[10];
bool check[10];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>m;
    while(m--){
        int x;
        cin>>x;
        check[x]=true;
    }
    for(int i=0;i<n;++i){
        arr[i]=i+1;
    }
    do{
        if(check[arr[0]])continue;
        for(int i=0;i<n;++i){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }while(next_permutation(arr,arr+n));
    return 0;
}