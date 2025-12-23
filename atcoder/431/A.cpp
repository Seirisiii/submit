#include<bits/stdc++.h>
using namespace std;
int h,b;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>h>>b;
	if(h>=b)cout<<h-b;
	else cout<<0;
	return 0;
}