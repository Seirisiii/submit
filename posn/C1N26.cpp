#include<bits/stdc++.h>
using namespace std;
int n;
int arr[100];
int idx;
bool check[10000];
void bubbleSort(int arr[],int n){
    for(int i=0;i<n-1;++i){
        for(int j=0;j<n-i-1;++j){
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(check[x]==false){
            arr[idx]=x;
            ++idx;
            check[x]=true;
        }
    }
    bubbleSort(arr,idx);
    cout<<idx<<"\n";
    for(int i=0;i<idx;++i){
        cout<<arr[i]<<" ";
    }
	return 0;
}
