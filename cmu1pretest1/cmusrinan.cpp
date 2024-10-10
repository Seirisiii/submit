#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	int tmp=n;
	while(tmp>9){
		int n1=tmp/1000;
		int n2=tmp/100%10;
		int n3=tmp/10%10;
		int n4=tmp%10;
		tmp=n1+n2+n3+n4;
	}
	cout<<tmp;
	return 0;
}