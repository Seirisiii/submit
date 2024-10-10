#include<bits/stdc++.h>
using namespace std;
int n;
int arr[100000];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>arr[i];
	}
	for(int i=0;i<n/2;++i){
		if(arr[i]!=arr[n-i-1]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}