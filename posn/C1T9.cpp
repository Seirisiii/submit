#include<bits/stdc++.h>
using namespace std;
int n;
char c='A';
int x=1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int l=2,r=2*n+2;
    for(int i=1;i<=n+2;++i){
        for(int j=1;j<=2*n+3;++j){
            if(i==1 or j==1 or j==2*n+3 or i==n+2)cout<<"* ";
            else if(j==n+2){
                if(i%2==0){
                    cout<<c<<" ";
                    ++c;
                    if(c>'Z')c='A';
                }
                else{
                    cout<<x<<" ";
                    ++x;
                    if(x>9)x=1;
                }
            }
            else if(j<l and j<r)cout<<". ";
            else if(j>l and j>r)cout<<". ";
            else cout<<"  ";
        }
        cout<<"\n";
        ++l;
        --r;
    }
    return 0;
}