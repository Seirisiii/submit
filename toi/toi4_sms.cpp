#include<bits/stdc++.h>
using namespace std;
int n;
int s,m;
int i,j;
string arr[9]={"","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
string res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    cin>>s>>m;
    --s;
    i=s/3;
    j=s%3;
    if(s!=0)res+=arr[s][(m-1)%arr[s].size()];
    while(--n){
        int ni,nj;
        cin>>nj>>ni>>m;
        i+=ni;
        j+=nj;
        s=i*3+j;
        if(s==0)while(m-- and !res.empty())res.pop_back();
        else res+=arr[s][(m-1)%arr[s].size()];
    }
    if(res.empty())cout<<"null";
    else cout<<res;
    return 0;
}