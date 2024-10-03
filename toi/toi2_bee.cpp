#include<bits/stdc++.h>
using namespace std;
int year;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin>>year and year!=-1){
        int w=1,s=0;
        for(int i=1;i<=year;++i){
            int w2=s+w+1;
            s=w;
            w=w2;
        }
        cout<<w<<" "<<w+s+1<<"\n";
    }
    return 0;
}