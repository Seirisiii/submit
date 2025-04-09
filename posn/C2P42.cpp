#include<bits/stdc++.h>
using namespace std;
int A,B,C;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>A>>B>>C;
    for(int i=-100;i<=100;++i){
        for(int j=-100;j<=100;++j){
            int k=A-i-j;
            if(i==j and i==k and j==k)continue;
            if(i*j*k==B and i*i+j*j+k*k==C){
                cout<<i<<" "<<j<<" "<<k<<" ";
                return 0;
            }   
        }
    }
    cout<<"No solution.";
    return 0;
}