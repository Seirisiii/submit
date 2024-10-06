#include<bits/stdc++.h>
using namespace std;
int n;
int sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b)swap(a,b);
        if(b<c)swap(b,c);
        if(a<b)swap(a,b);
        sum+=a;
    }
    cout<<sum;
    return 0;
}
