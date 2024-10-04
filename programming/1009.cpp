#include<bits/stdc++.h>
using namespace std;
int a,b;
string s;
string sa[10],sb[10];
long long na,nb;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>a>>b;
    getline(cin,s);
    for(int i=0;i<3;++i){
        int idx=0;
        getline(cin,s);
        for(int j=0;j<s.length();++j){
            if((j+1)%4==0)++idx;
            else sa[idx]+=s[j];
        }
    }
    for(int i=0;i<3;++i){
        int idx=0;
        getline(cin,s);
        for(int j=0;j<s.length();++j){
            if((j+1)%4==0)++idx;
            else sb[idx]+=s[j];
        }
    }
    for(int i=0;i<a;++i){
        na*=10;
        if(sa[i]=="     |  |")na+=1;
        else if(sa[i]==" _  _||_ ")na+=2;
        else if(sa[i]==" _  _| _|")na+=3;
        else if(sa[i]=="   |_|  |")na+=4;
        else if(sa[i]==" _ |_  _|")na+=5;
        else if(sa[i]==" _ |_ |_|")na+=6;
        else if(sa[i]==" _   |  |")na+=7;
        else if(sa[i]==" _ |_||_|")na+=8;
        else if(sa[i]==" _ |_| _|")na+=9;
    }
    for(int i=0;i<b;++i){
        nb*=10;
        if(sb[i]=="     |  |")nb+=1;
        else if(sb[i]==" _  _||_ ")nb+=2;
        else if(sb[i]==" _  _| _|")nb+=3;
        else if(sb[i]=="   |_|  |")nb+=4;
        else if(sb[i]==" _ |_  _|")nb+=5;
        else if(sb[i]==" _ |_ |_|")nb+=6;
        else if(sb[i]==" _   |  |")nb+=7;
        else if(sb[i]==" _ |_||_|")nb+=8;
        else if(sb[i]==" _ |_| _|")nb+=9;
    }
    cout<<na+nb;
    return 0;
}