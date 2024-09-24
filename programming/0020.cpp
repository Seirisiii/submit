#include<bits/stdc++.h>
using namespace std;
int mx,n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<5;++i){
        int sum=0;
        for(int j=0;j<4;++j){
            int x;
            cin>>x;
            sum+=x;
        }
        if(sum>mx){
            mx=sum;
            n=i+1;
        }
    }
    cout<<n<<" "<<mx;
    return 0;
}