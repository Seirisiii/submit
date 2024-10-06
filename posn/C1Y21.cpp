#include<bits/stdc++.h>
using namespace std;
int a,b;
void swap(int *a,int *b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    if(a<=-100 or a>100 or b<=-100 or b>100)cout<<"Error";
    else{
        swap(&a,&b);
        cout<<a<<" "<<b;
    }
    return 0;
}
