#include<bits/stdc++.h>
using namespace std;
const int N=505;
int n;
int arr[N];
int sum;
int dp[N][N][2];
int solve1(int l,int r){
    int res=0;
    while(l<=r){
        res+=max(arr[l],arr[r]);
        ++l;
        --r;
    }
    return res;
}
int solve2(int l,int r){
    if(r-l<=1)return max(arr[l],arr[r]);
    if(dp[l][r][0]!=0)return dp[l][r][0];
    int ll=l,lr=r,rl=l,rr=r;
    if(arr[l+1]>arr[r])ll+=2;
    else{
        ++ll;
        --lr;
    }
    if(arr[r-1]>=arr[l])rr-=2;
    else{
        ++rl;
        --rr;
    }
    return dp[l][r][0]=max(solve2(ll,lr)+arr[l],solve2(rl,rr)+arr[r]);
}
int solve3(int l,int r){
    if(r-l<=1)return max(arr[l],arr[r]);
    if(dp[l][r][1]!=0)return dp[l][r][1];
    return dp[l][r][1]=max(min(solve3(l+1,r-1)+arr[r],solve3(l,r-2)+arr[r]),min(solve3(l+1,r-1)+arr[l],solve3(l+2,r)+arr[l]));
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        sum+=arr[i];
    }
    int res=solve3(0,n-1);
    cout<<solve1(0,n-1)<<"\n"<<solve2(0,n-1)<<"\n"<<max(res,sum-res)<<"\n";
    return 0;
}