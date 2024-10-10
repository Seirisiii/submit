#include<bits/stdc++.h>
using namespace std;
int row,col;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>row>>col;
	if(col%2==0){
		string s="";
		for(int i=0;i<col/2;++i){
			s+="X ";
		}
		for(int i=0;i<row;++i){
			if(i%2==1)cout<<" ";
			cout<<s<<"\n";
		}
	}
	else{
		string s1="",s2="";
		for(int i=0;i<col/2+1;++i){
			s1+="X ";
		}
		for(int i=0;i<col/2;++i){
			s2+=" X";
		}
		for(int i=0;i<row;++i){
			if(i%2==0)cout<<s1;
			else cout<<s2;
			cout<<"\n";
		}
	}
	return 0;
}