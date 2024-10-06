#include<bits/stdc++.h>
using namespace std;
int n;
int x;
int arr[2000][1000];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        if(i%2==0){
            for(int j=0;j<n;++j){
                if(j<=i){
                    arr[i][j]=x;
                    ++x;
                    if(x>9)x=0;
                }
                else arr[i][j]=10;
            }
        }
        else{
            for(int j=n-1;j>=0;--j){
                if(j<=i){
                    arr[i][j]=x;
                    ++x;
                    if(x>9)x=0;
                }
                else arr[i][j]=10;
            }
        }
    }
    x-=1;
    for(int i=0;i<n;++i){
        if(i%2==0){
            for(int j=0;j<n;++j){
                if(j>=i){
                    arr[i+n][j]=x;
                    --x;
                    if(x<0)x=9;
                }
                else arr[i+n][j]=10;
            }
            }
        else{
            for(int j=n-1;j>=0;--j){
                if(j>=i){
                    arr[i+n][j]=x;
                    --x;
                    if(x<0)x=9;
                }
                else arr[i+n][j]=10;
            }
        }
    }
    for(int i=0;i<n*2;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j]!=10)cout<<arr[i][j]<<" ";
            else cout<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}

