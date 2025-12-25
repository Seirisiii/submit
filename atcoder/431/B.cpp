#include<bits/stdc++.h>
using namespace std;
int x,n;
int w[105];
int choose[105];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>x>>n;
	for(int i=1;i<=n;++i){
		cin>>w[i];
	}
	int q;
	cin>>q;
	while(q--){
		int p;
		cin>>p;
		if(choose[p])x-=w[p];
		else x+=w[p];
		cout<<x<<"\n";
		choose[p]=!choose[p];
	}
	return 0;
}