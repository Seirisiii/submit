#include<bits/stdc++.h>
using namespace std;
string a,b;
char arr[3][2004];
int idx;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    getline(cin,a);
    getline(cin,b);
    int lena=a.length();
    int lenb=b.length();
    int x=2*lena+3;
    for(int i=0;i<x;++i){
        arr[0][i]=b[idx];
        ++idx;
        if(idx==lenb)idx=0;
    }
    arr[1][x-1]=b[idx];
    ++idx;
    if(idx==lenb)idx=0;
    for(int i=x-1;i>=0;--i){
        arr[2][i]=b[idx];
        ++idx;
        if(idx==lenb)idx=0;
    }
    arr[1][0]=b[idx];
    int idx2=0;
    for(int i=1;i<x-1;++i){
        if(i%2==0){
            arr[1][i]=a[idx2];
            ++idx2;
        }
        else arr[1][i]='.';
    }
    for(int i=0;i<3;++i){
        for(int j=0;j<x;++j){
            if(arr[i][j]==' ')arr[i][j]='.';
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}
