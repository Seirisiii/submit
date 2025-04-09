#include<bits/stdc++.h>
using namespace std;
int n,m;
set<pair<int,int>,greater<pair<int,int>>>mem;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>m;
	while(m--){
		int s,l;
		cin>>s>>l;
		int o=s;
		for(auto it=mem.upper_bound({s+l,-1});it!=mem.end() and (it->first+it->second>s);++it){
			if(s+l-1>n)break;
			s=it->first+it->second;
		}
		if(s+l-1>n){
			s=1;
			for(auto it=mem.upper_bound({s+l,-1});it!=mem.end() and (it->first+it->second>s) and s<o;++it){
				if(s+l-1>n)break;
				s=it->first+it->second;
			}
			if(s>=o||s+l-1>n){
				cout<<"invalid\n";
				continue;
			}
		}
		auto it=mem.upper_bound({s+1,-1});
		if(it!=mem.end() and it->first+it->second>s){
			cout<<"invalid\n";
			continue;
		}
		if(it!=mem.upper_bound({s+l,-1})){
			cout<<"invalid\n";
			continue;
		}
		cout<<s<<" "<<s+l-1<<"\n";
		if(it!=mem.end() and it->first+it->second==s){
			pair<int,int> p={s=it->first,l+=it->second};
			mem.erase(it);
			mem.insert(p);
		}
        else mem.insert({s,l});
		it=mem.find({s,l});
		auto it2=it;
		if(it2!=mem.begin()){
			--it2;
			if(s+l==it2->first){
				pair<int,int> p={s,l+=it2->second};
				mem.erase(it);
				mem.erase(it2);
				mem.insert(p);
			}
		}
	}
	return 0;
}
