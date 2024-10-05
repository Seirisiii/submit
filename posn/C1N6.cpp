#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cout<<n/1000<<"\n"<<n%1000/500<<"\n"<<n%1000%500/100<<"\n"<<n%1000%500%100/50<<"\n"<<n%1000%500%100%50/20<<"\n"<<n%1000%500%100%50%20/10<<"\n"<<n%1000%500%100%50%20%10/5<<"\n"<<n%1000%500%100%50%20%10%5/1<<"\n";
    return 0;
}
