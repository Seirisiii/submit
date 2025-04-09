#include<bits/stdc++.h>
using namespace std;
int n,m;
int arr[27][101];
struct ets{
    string name;
    int sum;
    int valsum;
    int E;
    int valE;
    int T;
    int valT;
    int S;
    int valS;
};
ets a[105];
bool compare(ets a,ets b){
    return a.valsum>b.valsum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<n;++i){
        string s;
        cin>>s;
        arr[s[0]-'a'][(s[1]-'0')*10+(s[2]-'0')]=i;
        a[i].name=s;
    }
    for(int i=0;i<m;++i){
        string s;
        char c;
        int k;
        cin>>s>>c>>k;
        int idx=arr[s[0]-'a'][(s[1]-'0')*10+(s[2]-'0')];
        ++a[idx].sum;
        a[idx].valsum+=k;
        if(c=='e'){
            ++a[idx].E;
            a[idx].valE+=k;
        }
        else if(c=='t'){
            ++a[idx].T;
            a[idx].valT+=k;
        }
        else if(c=='s'){
            ++a[idx].S;
            a[idx].valS+=k;
        }
    }
    sort(a,a+n,compare);
    cout<<a[0].name<<" "<<a[0].sum<<" "<<a[0].valsum<<" "<<a[0].E<<" "<<a[0].valE<<" "<<a[0].T<<" "<<a[0].valT<<" "<<a[0].S<<" "<<a[0].valS;
    return 0;
}