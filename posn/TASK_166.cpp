#include<bits/stdc++.h>
using namespace std;
const int N=100005;
int n,s;
int arr[N];
int res=2e9;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>s;
    int st=0;
    int sum=0;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        sum+=arr[i];
        while(sum>=s){
            sum-=arr[st];
            res=min(res,i-st+1);
            ++st;
        }
        
    }
    if(res==2e9)cout<<-1;
    else cout<<res;
    return 0;
}