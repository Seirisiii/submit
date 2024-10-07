#include<bits/stdc++.h>
using namespace std;
int n;
char res[76][76];
int mxi,mxj;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    memset(res,' ',sizeof(res));
    while(n--){
        int x,y,r;
        char t;
        cin>>x>>y>>t>>r;
        mxi=max(y+r,mxi);
        mxj=max(x+r,mxj);
        if(t=='S'){
            for(int i=max(1,x-r);i<=x+r;++i){
                res[max(1,y-r)][i]='*';
                res[y+r][i]='*';
            }
            for(int i=max(1,y-r)+1;i<y+r;++i){
                res[i][max(1,x-r)]='*';
                res[i][x+r]='*';
            }
        }
        else if(t=='T'){
            bool chon=false;
            int left=x,right=x;
            for(int i=y;i<y+r;++i){
                if(!chon)res[i][left]='*';
                else res[i][1]='*';
                res[i][right]='*';
                if(left==1)chon=true;
                --left;
                ++right;
            }
            for(int i=max(1,left);i<=right;++i){
                res[y+r][i]='*';
            }
        }
        else if(t=='R'){
            bool chon=false;
            int left=x,right=x;
            for(int i=y-r;i<y;++i){
                if(i<1){
                    res[1][left]='*';
                    res[1][right]='*';
                }
                else{
                    res[i][max(1,left)]='*';
                    res[i][right]='*';
                }
                --left;
                ++right;
            }
            res[y][max(1,left)]='*';
            res[y][right]='*';
            ++left;
            --right;
            for(int i=y+1;i<=y+r;++i){
                res[i][max(1,left)]='*';
                res[i][right]='*';
                ++left;
                --right;
            }
        }
    }
    for(int i=1;i<=mxi;++i){
        for(int j=1;j<=mxj;++j){
            cout<<res[i][j];
        }
        cout<<"\n";
    }
    return 0;
}