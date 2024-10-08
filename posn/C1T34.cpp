#include<bits/stdc++.h>
using namespace std;
int n;
vector<pair<char,int>> vp,vp2;
int idx[15][20];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        string l;
        char k;
        int point=0;
        cin>>l>>k;
        if(l=="A")point=14;
        else if(l=="K")point=13;
        else if(l=="Q")point=12;
        else if(l=="J")point=11;
        else if(l=="10")point=10;
        else point=l[0]-'0';
        vp.emplace_back(k,point);
        vp2.emplace_back(k,point);
        if(n<2){
            cout<<"Oh No, I Have No Friends TT";
            return 0;
        }
    }
    int card=2;
    int layer=1;
    int floor=2;
    while(card+floor+3<=n){
        card+=floor+3;
        ++layer;
        floor+=3;
    }
    int cards=card;
    cout<<layer<<"\n";
    sort(vp.begin(),vp.end(),greater<pair<char,int>>());
    int cnt=1;
    for(auto i:vp){
        if(idx[i.second][i.first-'A']==0)idx[i.second][i.first-'A']=cnt;
        ++cnt;
    }
    int arr[layer+1]={};
    int data=0;
    for(int i=layer;i>=1;--i){
		data+=3*i-1;
		arr[layer-i]=data;
	}
    for(auto i:vp2){
        int val=idx[i.second][i.first-'A'];
        if(val>cards)cout<<"Eh?\n";
        else{
            int index=lower_bound(arr,arr+layer,val)-arr;
            cout<<index+1<<" "<<val-arr[index-1]<<"\n";
        }
        ++idx[i.second][i.first-'A'];
    }
    return 0;
}
