#include<bits/stdc++.h>
using namespace std;
int n,m,k;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>n>>m>>k;
	vector<int> h(n);
	for(auto &i:h)cin>>i;
	vector<int> b(m);
	for(auto &i:b)cin>>i;
	sort(h.begin(),h.end());
	sort(b.begin(),b.end());
	h.erase(h.begin()+k,h.end());
	b.erase(b.begin(),b.end()-k);
	for(int i=0;i<k;++i){
		if(h[i]>b[i]){
			cout<<"No";
			return 0;
		}
	}
	cout<<"Yes";
	return 0;
}