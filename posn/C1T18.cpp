#include<bits/stdc++.h>
using namespace std;
char str[7000001];
long long arr[1000001];
double diff[1000001];
double avg,cnt;
long long mx;
long long ans;
double mn=DBL_MAX;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf("%s",str);
    for(char *tok=strtok(str,"-");tok!=NULL;tok=strtok(NULL,"-")){
        int x=stoi(tok);
        ++arr[x];
        avg+=x;
        ++cnt;
    }
    avg/=cnt;
    for(int i=0;i<1000001;++i){
        mx=max(mx,arr[i]);
    }
    for(int i=0;i<1000001;++i){
        if(arr[i]==mx and arr[i]!=0){
            if(abs(avg-i)==0){
                cout<<i<<" "<<mx;
                return 0;
            }
            else diff[i]=abs(avg-i);
        }
    }
    for(int i=0;i<1000001;++i){
        if(diff[i]!=0)mn=min(mn,diff[i]);
    }
    for(int i=0;i<1000001;++i){
        if(diff[i]!=0 and diff[i]==mn){
            cout<<i<<" "<<mx;
            return 0;
        }
    }
    return 0;
}