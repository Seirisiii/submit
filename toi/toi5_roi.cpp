#include<bits/stdc++.h>
using namespace std;
int c;
pair<double,pair<int,int>> res;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>c;
    res.first=DBL_MAX;
    for(int i=1000;i<=15000;i+=500){
        for(int j=74;j<=144;++j){
            double amount=((100-(0.8569*exp(0.09*(j-100))))*i)/100.0;
            double val=amount*j-(i*(100-((i-1000)/500)))-c;
            if(val>0 and val<res.first)res={val,{i,j}};
        }
    }
    printf("%d\n%d\n%.2lf",res.second.first,res.second.second,res.first);
    return 0;
}