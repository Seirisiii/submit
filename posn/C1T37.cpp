#include<bits/stdc++.h>
using namespace std;
int t;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>t;
	while(t--){
		string s;
		long long mc,p,q,e;
		cin>>s;
		cin>>mc>>p>>q>>e;
		long long n=p*q;
		long long phin=(p-1)*(q-1);
		if(e<=1 or e>=phin or __gcd(phin,e)!=1){
			cout<<"Error\n";
			continue;
		}
		long long k=1;
		long long d=0;
		while(true){
			if((k*phin+1)%e==0){
				d=(k*phin+1)/e;
				break;
			}
			++k;
		}
		if(s=="Encrypt"){
			long long res=1;
			for(int i=1;i<=e;++i){
				res*=mc%n;
				res%=n;
			}
			cout<<uppercase<<hex<<res<<"\n";
		}
		else if(s=="Decrypt"){
			long long res=1;
			for(int i=1;i<=d;++i){
				res*=mc%n;
				res%=n;
			}
			cout<<uppercase<<hex<<res<<"\n";
		}
	}
	return 0;
}