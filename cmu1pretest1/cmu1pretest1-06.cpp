#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n;
	if(n==1){
		int x;
		cin>>x;
		int l=0,r=x-1;
		for(int i=0;i<x;++i){
			for(int j=0;j<x;++j){
				if(j==l or j==r)cout<<"* ";
				else cout<<"  ";
			}
			cout<<"\n";
			++l;
			--r;
		}
	}
	else if(n==2){
		int x;
		cin>>x;
		int l=x-1,r=x;
		for(int i=0;i<x;++i){
			for(int j=0;j<x*2;++j){
				if(j==l)cout<<"/";
				else if(j==r)cout<<"\\";
				else cout<<" ";
			}
			--l;
			++r;
			cout<<"\n";
		}
	}
	else if(n==3){
		int x;
		int h[x+5]={};
		int mxi=0;
		cin>>x;
		for(int i=0;i<x;++i){
			cin>>h[i];
			mxi=max(mxi,h[i]);
		}
		for(int i=0;i<mxi;++i){
			for(int j=0;j<x;++j){
				for(int k=0;k<h[j];++k){
					if(i+k==mxi-1)cout<<"/";
					else cout<<" ";
				}
				for(int k=h[j]-1;k>=0;--k){
					if(i+k==mxi-1)cout<<"\\";
					else cout<<" ";
				}
			}
			cout<<"\n";
		}
	}
	else if(n==4){
		int x;
		cin>>x;
		char c='Z';
		for(int i=0;i<x*2+3;++i){
			cout<<"_";
		}
		cout<<"\n";
		cout<<"||";
		for(int i=0;i<x-1;++i){
			cout<<" ";
		}
		cout<<"^";
		for(int i=0;i<x-1;++i){
			cout<<" ";
		}
		cout<<"||\n";
		int l=x-2,r=x;
		for(int i=0;i<x-1;++i){
			cout<<"||";
			for(int j=0;j<x*2-1;++j){
				if(j==l)cout<<"/";
				else if(j==r)cout<<"\\";
				else if(j>l and j<r){
					cout<<c;
					--c;
					if(c<'A')c='Z';
				}
				else cout<<" ";
			}
			--l;
			++r;
			cout<<"||\n";
		}
		cout<<"|/";
		for(int i=0;i<x*2-1;++i){
			cout<<c;
			--c;
			if(c<'A')c='Z';
		}
		cout<<"\\|\n";
	}
	else cout<<"error";
	return 0;
}