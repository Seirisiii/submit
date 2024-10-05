#include<bits/stdc++.h>
using namespace std;
int n;
int t1[1000];
int t2[1000];
int team1,team2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>t1[i];
    }
    for(int i=0;i<n;++i){
        cin>>t2[i];
    }
    for(int i=0;i<n;++i){
        if(t1[i]==t2[i]){
            ++team1;
            ++team2;
        }
        else if(t1[i]<t2[i])team2+=2;
        else team1+=2;
    }
    if(team1>team2)cout<<"1\n"<<team1<<" "<<team2;
    else if(team2>team1)cout<<"2\n"<<team2<<" "<<team1;
    else cout<<"D\n"<<team1<<" "<<team2;
    return 0;
}
