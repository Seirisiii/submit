#include<bits/stdc++.h>
using namespace std;
int n;
double res;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	for(int i=0;i<n;++i){
		double d;
		cin>>d;
		while(d<=0 or d>=10000){
			cin>>d;
		}
		res+=d;
	}
	cout<<fixed<<setprecision(2)<<res;
	return 0;
}