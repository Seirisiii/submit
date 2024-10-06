#include<bits/stdc++.h>
using namespace std;
char a,b,c;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b>>c;
    char x,y;
    while(cin>>x>>y and x!='X' and y!='X'){
        if(x=='A'){
            if(y=='R')swap(a,b);
        }
        else if(x=='B'){
            if(y=='R')swap(c,b);
            else if(y=='L')swap(a,b);
        }
        else if(x=='C'){
            if(y=='L')swap(b,c);
        }
    }
    if(a=='T')cout<<"Triangle\n";
    else if(a=='C')cout<<"Candy\n";
    else if(a=='S')cout<<"Star\n";
    if(b=='T')cout<<"Triangle\n";
    else if(b=='C')cout<<"Candy\n";
    else if(b=='S')cout<<"Star\n";
    if(c=='T')cout<<"Triangle\n";
    else if(c=='C')cout<<"Candy\n";
    else if(c=='S')cout<<"Star\n";
    return 0;
}

