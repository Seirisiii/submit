#include<bits/stdc++.h>
using namespace std;
int n;
int x[105];
int y[105];
double res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>x[i]>>y[i];
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            for(int k=j+1;k<n;++k){
                res=max(res,abs(x[i]*y[j]+x[j]*y[k]+x[k]*y[i]-y[i]*x[j]-y[j]*x[k]-y[k]*x[i])/2.0);
            }
        }
    }
    cout<<fixed<<setprecision(3)<<res;
    return 0;
}