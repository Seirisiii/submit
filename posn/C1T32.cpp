#include<bits/stdc++.h>
using namespace std;
int n;
bool prime[10001];
bool banana[10001];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    prime[1]=true;
    for(int i=2;i<=10000;++i){
        for(int j=i*i;j<=10000;j+=i){
            if(prime[j]==false){
                prime[j]=true;
                banana[j]=true;
            }
        }
    }
    for(int i=2;i<=10000;++i){
        int x=i;
        int sum=0;
        sum+=x%10;
        while(x){
            x/=10;
            sum+=x%10;
        }
        if(prime[sum])banana[i]=true;
    }
    for(int i=2;i<=n;++i){
        if(!banana[i])cout<<i<<" ";
    }
    return 0;
}


