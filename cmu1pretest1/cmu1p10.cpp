#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	int arr[n+1]={};
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
	sort(arr,arr+n);
	cout<<"\n";
	for(int i=0;i<n;++i){
		cout<<arr[i]<<" ";
	}
	return 0;
}