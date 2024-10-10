#include<bits/stdc++.h>
using namespace std;
int w,h;
char arr[1005][1005];
bool visited[1005][1005];
int mx;
int solve(int i,int j){
	if(i<0 or i>=h or j<0 or j>=w)return 0;
	if(visited[i][j])return 0;
	visited[i][j]=true;
	int cnt=1;
	if(i-1>=0)if(arr[i-1][j]=='*')cnt+=solve(i-1,j);
	if(i+1<h)if(arr[i+1][j]=='*')cnt+=solve(i+1,j);
	if(j-1>=0)if(arr[i][j-1]=='*')cnt+=solve(i,j-1);
	if(j+1<w)if(arr[i][j+1]=='*')cnt+=solve(i,j+1);
	return cnt;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cin>>w>>h;
	for(int i=0;i<h;++i){
		for(int j=0;j<w;++j){
			cin>>arr[i][j];
		}
	}
	for(int ii=0;ii<h;++ii){
		for(int jj=0;jj<w;++jj){
			if(arr[ii][jj]=='*' and !visited[ii][jj]){
				int x=solve(ii,jj);
				mx=max(mx,x);
			}
		}
	}
	cout<<mx;
	return 0;
}