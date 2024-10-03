#include<bits/stdc++.h>
using namespace std;
int m,n;
char c[25][25];
int k;
int di[8]={-1,-1,0,1,1,1,0,-1};
int dj[8]={0,1,1,1,0,-1,-1,-1};
bool solve(int I,int J,string S){
    int sz=S.length();
    for(int i=0;i<8;++i){
        for(int j=1;j<sz;++j){
            int ni=di[i]*j;
            int nj=dj[i]*j;
            if(c[I+ni][J+nj]!=S[j])break;
            if(j==sz-1)return true;
        }
    }
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>c[i][j];
            c[i][j]=tolower(c[i][j]);
        }
    }
    cin>>k;
    while(k--){
        bool check=false;
        string s;
        cin>>s;
        for(int i=0;i<s.length();++i){
            s[i]=tolower(s[i]);
        }
        for(int i=0;i<m and !check;++i){
            for(int j=0;j<n and !check;++j){
                if(c[i][j]==s[0]){
                    if(solve(i,j,s)){
                        cout<<i<<" "<<j<<"\n";
                        check=true;
                    }
                }
            }
        }
    }
    return 0;
}