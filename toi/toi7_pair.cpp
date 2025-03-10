#include<bits/stdc++.h>
using namespace std;
int n;
pair<int,int> p[100000];
double res;
void combine(int l,int mid,int r){
    int L=mid-l+1;
    int R=r-mid;
    int arrL[L]={};
    int arrR[R]={};
    double val=0;
    for(int i=l;i<=mid;++i){
        arrL[i-l]=p[i].second;
        val+=arrL[i-l];
    }
    for(int i=mid+1;i<=r;++i){
        arrR[i-mid-1]=p[i].second;
    }
    int i=0,j=0,k=l;
    while(i<L and j<R){
        if(arrL[i]<=arrR[j]){
            val-=arrL[i];
            p[k].second=arrL[i];
            ++i;
        }
        else{
            res+=val+arrR[j]*(L-i);
            p[k].second=arrR[j];
            ++j;
        }
        ++k;
    }
    while(i<L){
        p[k].second=arrL[i];
        ++i;
        ++k;
    }
    while(j<R){
        p[k].second=arrR[j];
        ++j;
        ++k;
    }
    return ;
}
void mergesort(int l,int r){
    if(l>=r)return ;
    int mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    combine(l,mid,r);
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        scanf("%d%d",&p[i].second,&p[i].first);
    }
    sort(p,p+n);
    mergesort(0,n-1);
    printf("%.0lf",res);
    return 0;
}