#include<bits/stdc++.h>
using namespace std;
int n;
map<pair<int,string>,pair<int,char>> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    mp[{1,"00"}]={1,'0'};
    mp[{1,"11"}]={2,'1'};
    mp[{2,"10"}]={3,'0'};
    mp[{2,"01"}]={4,'1'};
    mp[{3,"11"}]={1,'0'};
    mp[{3,"00"}]={2,'1'};
    mp[{4,"01"}]={3,'0'};
    mp[{4,"10"}]={4,'1'};
    int status=1;
    while(n--){
        string s;
        cin>>s;
        if(s.size()!=16)break;
        string res="";
        for(int i=0;i<16;i+=2){
            string str="";
            str+=s[i];
            str+=s[i+1];
            res+=mp[{status,str}].second;
            status=mp[{status,str}].first;
        }
        if(res=="01000001")cout<<"A";
        else if(res=="01000010")cout<<"B";
        else if(res=="01000011")cout<<"C";
        else if(res=="01000100")cout<<"D";
        else if(res=="01000101")cout<<"E";
        else if(res=="01000110")cout<<"F";
        else if(res=="01000111")cout<<"G";
        else if(res=="01001000")cout<<"H";
        else if(res=="01001001")cout<<"I";
        else if(res=="01001010")cout<<"J";
        else if(res=="01001011")cout<<"K";
        else if(res=="01001100")cout<<"L";
        else if(res=="01001101")cout<<"M";
        else if(res=="01001110")cout<<"N";
        else if(res=="01001111")cout<<"O";
        else if(res=="01010000")cout<<"P";
        else if(res=="01010001")cout<<"Q";
        else if(res=="01010010")cout<<"R";
        else if(res=="01010011")cout<<"S";
        else if(res=="01010100")cout<<"T";
        else if(res=="01010101")cout<<"U";
        else if(res=="01010110")cout<<"V";
        else if(res=="01010111")cout<<"W";
        else if(res=="01011000")cout<<"X";
        else if(res=="01011001")cout<<"Y";
        else if(res=="01011010")cout<<"Z";
    }
    return 0;

}