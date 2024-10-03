#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    while(n--){
        int dice1=1,dice2=2,dice3=3,dice4=5,dice5=4,dice6=6;
        string s;
        cin>>s;
        for(auto i:s){
            if(i=='F'){
                int tmp=dice1;
                dice1=dice4;
                dice4=dice6;
                dice6=dice2;
                dice2=tmp;
            }
            else if(i=='B'){
                int tmp=dice1;
                dice1=dice2;
                dice2=dice6;
                dice6=dice4;
                dice4=tmp;
            }
            else if(i=='L'){
                int tmp=dice1;
                dice1=dice5;
                dice5=dice6;
                dice6=dice3;
                dice3=tmp;
            }
            else if(i=='R'){
                int tmp=dice1;
                dice1=dice3;
                dice3=dice6;
                dice6=dice5;
                dice5=tmp;
            }
            else if(i=='C'){
                int tmp=dice2;
                dice2=dice5;
                dice5=dice4;
                dice4=dice3;
                dice3=tmp;
            }
            else if(i=='D'){
                int tmp=dice2;
                dice2=dice3;
                dice3=dice4;
                dice4=dice5;
                dice5=tmp;
            }
        }
        cout<<dice2<<" ";
    }
    return 0;
}