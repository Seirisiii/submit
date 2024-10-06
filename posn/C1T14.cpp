#include<bits/stdc++.h>
using namespace std;
long long h,l,n;
long long cnt;
long long p=-1;
long long mx=LLONG_MIN;
long long idx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>h>>l>>n;
    while(n--){
        long long x;
        cin>>x;
        if(x<l or x>l+h)continue;
        if(p!=x){
            p=x;
            cnt=1;
        }
        else ++cnt;
        if(mx<cnt){
            mx=cnt;
            idx=p;
        }
    }
    cout<<mx<<" "<<idx;
    return 0;
}
