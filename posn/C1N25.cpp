#include<bits/stdc++.h>
using namespace std;
int n;
int arr[100];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    if(n<3 or n>100){
        cout<<"Invalid";
        return 0;
    }
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;++i){
        int min_idx=i;
        for(int j=i+1;j<n;++j){
            if(arr[j]<arr[min_idx])min_idx=j;
        }
        if(min_idx!=i){
            int tmp=arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx]=tmp;
        }
    }
    if(n%2==0)printf("%d\n%d\n%.2lf",arr[0],arr[n-1],(arr[n/2+1]+arr[n/2])/2.0);
    else printf("%d\n%d\n%d",arr[0],arr[n-1],arr[n/2]);
	return 0;
}

