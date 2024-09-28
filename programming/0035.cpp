#include<bits/stdc++.h>
using namespace std;
int n;
int x[100],y[100];
int mx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n-2;++i){
        for(int j=i+1;j<n-1;++j){
            for(int k=j+1;k<n;++k){
                mx=max(mx,abs(x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i]));
            }
        }
    }
    double res=mx/2.0;
    cout<<fixed<<setprecision(3)<<res;
    return 0;
}