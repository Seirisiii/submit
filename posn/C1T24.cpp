#include<bits/stdc++.h>
using namespace std;
int n,k,x,y;
int t;
int arr[10][10];
char fruit[10][10];
int mn=2e9;
void solve(int i,int j,int power,int walk,int hp){
    if(i<0 or j<0 or i>n or j>n)return ;
    if(walk>mn)return ;
    if(i==x and j==y){
        if(power>=hp){
            mn=min(mn,walk);
            return ;
        }
        else{
            hp/=2;
            if(hp==0){
                mn=min(mn,walk);
                return ;
            }
            else solve(0,0,power,walk,hp);
        }
    }
    else if(fruit[i][j]=='A'){
        fruit[i][j]=' ';
        solve(i+1,j,power+arr[i][j],walk+1,hp);
        solve(i,j+1,power+arr[i][j],walk+1,hp);
        fruit[i][j]='A';
    }
    else if(fruit[i][j]=='B'){
        fruit[i][j]=' ';
        solve(i+1,j,power*arr[i][j],walk+1,hp);
        solve(i,j+1,power*arr[i][j],walk+1,hp);
        fruit[i][j]='B';
    }
    else if(fruit[i][j]=='C'){
        fruit[i][j]=' ';
        for(int a=max(0,i-arr[i][j]);a<=min(i+arr[i][j],n);++a){
            for(int b=max(0,j-arr[i][j]);b<=min(j+arr[i][j],n);++b){
                solve(a,b,power,walk,hp);
            }
        }
        fruit[i][j]='C';
    }
    else{
        solve(i+1,j,power,walk+1,hp);
        solve(i,j+1,power,walk+1,hp);
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>k>>x>>y;
    cin>>t;
    for(int i=0;i<t;++i){
        int xt,yt,point;
        char m;
        cin>>xt>>yt>>m>>point;
        fruit[xt][yt]=m;
        arr[xt][yt]=point;
    }
    solve(0,0,0,0,k);
    cout<<mn;
    return 0;
}