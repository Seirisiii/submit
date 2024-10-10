#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int h,m;
int mii;
int res;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	cin>>s;
	h=(s[0]-'0')*10+s[1]-'0';
	m=(s[3]-'0')*10+s[4]-'0';
	if(h==12)h=0;
	mii=h*60+m;
	for(int i=0;i<n;++i){
		string str;
		cin>>str;
		int h2=(str[0]-'0')*10+str[1]-'0';
		int m2=(str[3]-'0')*10+str[4]-'0';
		if(h2==12)h2=0;
		int mii2=h2*60+m2;
		int ans=abs(mii2-mii);
		if(ans>360)ans=720-ans;
		res+=ans;
	}
	cout<<res;
	return 0;
}