#include<bits/stdc++.h>
using namespace std;
int even,odd;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=8;
    while(n--){
        int x;
        cin>>x;
        if(x%2==0)even+=x;
        else odd+=x;
    }
    if(odd>even)cout<<"odd\n";
    else if(odd<even)cout<<"even\n";
    else cout<<"equal\n";
    cout<<even<<"\n"<<odd;
    return 0;
}
