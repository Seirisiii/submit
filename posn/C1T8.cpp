#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    int mid=n*3/2;
    int py=n/2,sidepy=0;
    for(int i=0;i<n*3;++i){
        int num=1;
        for(int j=0;j<n*3;++j){
            if((j<mid-py or j>=mid+py+(n%2)) and (j>=sidepy and j<=n*3-sidepy-1))cout<<num%10;
            else cout<<" ";
            if(j<i)++num;
            if(j>=n*3-i-1)--num;
        }
        cout<<"\n";
        if(i<n)--py;
        else if(i>=n*2-1)++py;
        if(i>=n-1&&i<mid)++sidepy;
        if(i>=mid-1+(n%2))--sidepy;
    }
    return 0;
}