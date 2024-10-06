#include<bits/stdc++.h>
using namespace std;
char c;
double x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c;
    if(c=='W' or c=='w'){
        cin>>x;
        printf("%.2f",x*0.2);
    }
    else if(c=='G' or c=='g'){
        cin>>x;
        printf("%.2f",x*0.25);
    }
    else if(c=='P' or c=='p'){
        cin>>x;
        printf("%.2f",x*0.3);
    }
    else cout<<"Data not found...";
    return 0;
}