#include<bits/stdc++.h>
using namespace std;
int cnt;
double sum;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true){
        double x;
        cin>>x;
        if(x==0)break;
        else sum+=x;
        ++cnt;
    }
    if(cnt==0)cout<<"No data";
    else printf("%.6lf",sum/cnt);
    return 0;
}
