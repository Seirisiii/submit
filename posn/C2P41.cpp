#include<bits/stdc++.h>
using namespace std;
int TC;
int res;
int arr[8][8];
bool board[8][8];
bool issafe(bool board[8][8],int i,int col){
    int r=i;
    int c=col;
    while(r>=0 and r<8 and c>=0 and c<8){
        if(board[r][c])return false;
        ++r;
        ++c;
    }
    r=i;
    c=col;
    while(r>=0 and r<8 and c>=0 and c<8){
        if(board[r][c])return false;
        ++r;
        --c;
    }
    r=i;
    c=col;
    while(r>=0 and r<8 and c>=0 and c<8){
        if(board[r][c])return false;
        --r;
        --c;
    }
    r=i;
    c=col;
    while(r>=0 and r<8 and c>=0 and c<8){
        if(board[r][c])return false;
        --r;
        ++c;
    }
    r=i;
    c=col;
    while(r>=0 and r<8 and c>=0 and c<8){
        if(board[r][c])return false;
        --r;
    }
    r=i;
    c=col;
    while(r>=0 and r<8 and c>=0 and c<8){
        if(board[r][c])return false;
        ++r;
    }
    r=i;
    c=col;
    while(r>=0 and r<8 and c>=0 and c<8){
        if(board[r][c])return false;
        --c;
    }
    r=i;
    c=col;
    while(r>=0 and r<8 and c>=0 and c<8){
        if(board[r][c])return false;
        ++c;
    }
    return true;
}
void solve(bool board[8][8],int col,int sum){
    if(col>=8){
        res=max(res,sum);
        return ;
    }
    for(int i=0;i<8;++i){
        if(issafe(board,i,col)){
            board[i][col]=true;
            solve(board,col+1,sum+arr[i][col]);
            board[i][col]=false;
        }
    }
    return ;
}
void runcase(){
    res=0;
    for(int i=0;i<8;++i){
        for(int j=0;j<8;++j){
            cin>>arr[i][j];
        }
    }
    solve(board,0,0);
    cout<<res<<"\n";
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>TC;
    while(TC--)runcase();
    return 0;
}