#include<bits/stdc++.h>
using namespace std;
int numbers[100000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;++i){
        cin>>numbers[i];
    }
    sort(numbers,numbers+n);
    for(int i=0;i<m;++i){
        int q;
        cin>>q;
        cout<<upper_bound(numbers,numbers+n,q)-numbers<<"\n";
    }
    return 0;
}
