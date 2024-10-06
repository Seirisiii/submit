#include<bits/stdc++.h>
using namespace std;
int n,m;
char c='A';
int num=0;
bool bo;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    int ch=0,nu=m-1;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(j==ch and j==nu)cout<<c;
            else if(j==ch)cout<<c;
            else if(j==nu)cout<<num%10;
            else cout<<" ";
        }
        cout<<"\n";
        if(ch==0 and nu==m-1)bo=false;
        else if(ch==m-1 and nu==0)bo=true;
        if(!bo){
            ++ch;
            --nu;
        }
        else{
            --ch;
            ++nu;
        }
        ++c;
        if(c>'Z')c='A';
        ++num;
    }
    return 0;
}



