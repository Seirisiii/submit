#include<bits/stdc++.h>
using namespace std;
int a,b,c,d;
int h,m;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>a>>b>>c>>d;
	h=c-a;
	m=d-b;
	if(m<0){
		--h;
		m=60+m;
	}
	if(h==0 and m<=15)cout<<0;
	else if(h==0 and m<60)cout<<10;
	else if(h==1 and m==0)cout<<10;
	else if(h==1 and m<60)cout<<20;
	else if(h==2 and m==0)cout<<20;
	else if(h==2 and m<60)cout<<30;
	else if(h==3 and m==0)cout<<30;
	else if(h==3 and m<60)cout<<50;
	else if(h==4 and m==0)cout<<50;
	else if(h==4 and m<60)cout<<70;
	else if(h==5 and m==0)cout<<70;
	else if(h==5 and m<60)cout<<90;
	else if(h==6 and m==0)cout<<90;
	else cout<<200;
	return 0;
}