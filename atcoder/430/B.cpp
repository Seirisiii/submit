#include<bits/stdc++.h>
using namespace std;
int n,m;
char arr[10][10];
unordered_set<string> s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n-m+1;++i){
        for(int j=0;j<n-m+1;++j){
            string str="";
            for(int I=i;I<i+m;++I){
                for(int J=j;J<j+m;++J){
                    str+=arr[I][J];
                }
            }
            s.insert(str);
        }
    }
    cout<<(int)s.size();
    return 0;
}