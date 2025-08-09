#include<bits/stdc++.h>
using namespace std;
int r,c;
char arr[101][101];
bool check;
int resi,resj;
int area;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>r>>c;
    for(int i=1;i<=r;++i){
        for(int j=1;j<=c;++j){
            cin>>arr[i][j];
        }
    }
    for(int i=1;i<=r and !check;++i){
        for(int j=1;j<=c and !check;++j){
            if(arr[i][j]=='x'){
                check=true;
                resi=i;
                resj=j;
                int di=i;
                int dj=j;
                while(di+1<=r and arr[di+1][j]=='x'){
                    ++di;
                }
                while(dj+1<=c and arr[i][dj+1]=='x'){
                    ++dj;
                }
                area=min(di-i+1,dj-j+1);
                cout<<i<<" "<<j<<" "<<area<<"\n";
            }
        }
    }
    for(int i=resi;i<resi+area;++i){
        for(int j=resj;j<resj+area;++j){
            arr[i][j]='.';
        }
    }
    check=false;
    for(int i=r;i>0 and !check;--i){
        for(int j=c;j>0 and !check;--j){
            if(arr[i][j]=='x'){
                check=true;
                int di=i;
                int dj=j;
                while(di-1>0 and arr[di-1][j]=='x'){
                    --di;
                }
                while(dj-1>0 and arr[i][dj-1]=='x'){
                    --dj;
                }
                area=max(i-di+1,j-dj+1);
                cout<<max(1,i-area+1)<<" "<<max(1,j-area+1)<<" "<<area<<"\n";
            }
        }
    }
    if(!check)cout<<resi<<" "<<resj<<" 1\n";
    return 0;
}