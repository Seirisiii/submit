#include<bits/stdc++.h>
using namespace std;
int sum;
int mx=INT_MIN,mn=INT_MAX;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=10;
    while(n--){
        int x;
        cin>>x;
        sum+=x;
        mx=max(mx,x);
        mn=min(mn,x);
    }
    cout<<mn<<"\n"<<mx<<"\n";
    cout<<fixed<<setprecision(2)<<sum/10.0;
    return 0;
}


