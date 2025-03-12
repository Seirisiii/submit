#include<bits/stdc++.h>
using namespace std;
const int MAX=7368788;
int n;
bool prime[MAX];
vector<int> v;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=2;i<MAX;++i){
        if(prime[i])continue;
        v.emplace_back(i);
        if(v.size()==n){
            cout<<i;
            return 0;
        }
        for(int j=i*2;j<MAX;j+=i){
            prime[j]=true;
        }
    }
    return 0;
}