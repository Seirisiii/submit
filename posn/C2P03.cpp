#include<bits/stdc++.h>
using namespace std;
const int N=1e3+1;
int n,t;
int arr[N];
void solve(){
    int x;
    int i,j;
    cin>>x;
    if(x==1){
        cin>>j>>i;
        if(arr[j]<i)++arr[j];
    }
    else if(x==2){
        cin>>j>>i;
        if(arr[j]>=i)--arr[j];
    }
    else if(x==3){
        cin>>j>>i;
        for(int a=max(1,j-1);a<=j+1 and a<n;++a){
            for(int b=i+1;b>=max(1,i-1);--b){
                if(arr[a]>=b)--arr[a];
            }
        }
    }
    else if(x==4){
        cin>>i;
        for(int j=0;j<=n;++j){
            if(arr[j]>=i)--arr[j];
        }
    }
   for(int i=1;i<=n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>t;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
    }
    while(t--)solve();
    return 0;
}