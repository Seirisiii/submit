#include<bits/stdc++.h>
using namespace std;
const int M=15;
char op[5]={'+','-','*','/','^'};
int m;
int arr[M];
int n;
int type;
bool isop(char c){
    for(int i=0;i<5;++i){
        if(op[i]==c)return true;
    }
    return false;
}
double opcal(double a,double b,char c){
    if(c=='+')return a+b;
    if(c=='-')return a-b;
    if(c=='*')return a*b;
    if(c=='/')return a/b;
    return pow(a,b);
}
void runcase(){
    string s;
    cin>>s;
    if(type==0){
        stack<string> stk;
        int sz=s.size();
        for(int i=0;i<sz;++i){
            string str="";
            if(isop(s[i]))str+=s[i];
            else str+=to_string(arr[s[i]-'A']);
            if(isop(s[i])){
                string s1=stk.top();
                stk.pop();
                string s2=stk.top();
                stk.pop();
                str="("+s2+str+s1+")";
            }
            stk.push(str);
        }
        cout<<stk.top()<<"\n";
    }
    else if(type==1){
        stack<double> stk;
        int sz=s.size();
        for(int i=0;i<sz;++i){
            if(isop(s[i])){
                double s1=stk.top();
                stk.pop();
                double s2=stk.top();
                stk.pop();
                stk.push(opcal(s2,s1,s[i]));
            }
            else stk.push(arr[s[i]-'A']);
        }
        printf("%.2lf\n",stk.top());
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m;
    for(int i=0;i<m;++i){
        cin>>arr[i];
    }
    cin>>n>>type;
    while(n--)runcase();
    return 0;
}