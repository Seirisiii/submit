#include<bits/stdc++.h>
using namespace std;
int n;
char c1,c2,c3,c4;
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     cin>>n;
     cin>>c1>>c2>>c3>>c4;
     for(int i=0;i<n;++i){
          for(int j=0;j<n;++j){
               if(j>n-i-1)cout<<c3<<" ";
               else cout<<c1<<" ";
          }
          cout<<" ";
          for(int j=0;j<n;++j){
               if(j>=i)cout<<c2<<" ";
               else cout<<c4<<" ";
          }
          cout<<"\n";
     }
     cout<<"\n";
     for(int i=0;i<n;++i){
          for(int j=0;j<n;++j){
               if(j>i)cout<<c4<<" ";
               else cout<<c2<<" ";
          }
          cout<<" ";
          for(int j=0;j<n;++j){
               if(j>=n-i-1)cout<<c1<<" ";
               else cout<<c3<<" ";
          }
          cout<<"\n";
     }
     return 0;
}
