#include<bits/stdc++.h>
using namespace std;
const int N=1501;
int xt,yt;
int n;
int xa[N],ya[N];
int xb[N],yb[N];
int xc[N],yc[N];
int xd[N],yd[N];
vector<tuple<int,int,int,int>> v1,v2;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>xt>>yt;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>xa[i]>>ya[i];
    }
    for(int i=0;i<n;++i){
        cin>>xb[i]>>yb[i];
    }
    for(int i=0;i<n;++i){
        cin>>xc[i]>>yc[i];
    }
    for(int i=0;i<n;++i){
        cin>>xd[i]>>yd[i];
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            v1.emplace_back(xa[i]+xb[j],ya[i]+yb[j],i,j);
            v2.emplace_back(xc[i]+xd[j],yc[i]+yd[j],i,j);
        }
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(auto [x1,y1,i1,j1]:v1){
        int l=0,r=n*n-1;
        while(l<=r){
            int mid=(l+r)/2;
            auto [x2,y2,i2,j2]=v2[mid];
            if(x1+x2==xt and y1+y2==yt){
                cout<<xa[i1]<<" "<<ya[i1]<<"\n";
                cout<<xb[j1]<<" "<<yb[j1]<<"\n";
                cout<<xc[i2]<<" "<<yc[i2]<<"\n";
                cout<<xd[j2]<<" "<<yd[j2]<<"\n";
                return 0;
            }
            if(x1+x2>xt)r=mid-1;
            else if(x1+x2<xt)l=mid+1;
            else if(y1+y2>yt)r=mid-1;
            else if(y1+y2<yt)l=mid+1;
        }
    }
    return 0;
}