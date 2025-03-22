#include<bits/stdc++.h>
using namespace std;
char c2[5][5]={"ABCD","EFGH","IJKL","MNO-"};
int res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            char c;
            cin>>c;
            for(int k=0;k<4;++k){
                for(int l=0;l<4;++l){
                    if(c==c2[k][l]){
                        res+=abs(i-k)+abs(j-l);
                        goto z;
                    }
                }
            }
            z:;
        }
    }
    cout<<res;
    return 0;
}
