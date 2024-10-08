#include<bits/stdc++.h>
using namespace std;
int n;
double a[101][101];
double b[101];
double iva[101][101];
double ans[101];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;++i){
        cin>>b[i];
    }
    for(int i=0;i<n;++i){
        iva[i][i]=1;
    }
    for(int i=0;i<n;++i){
        if(a[i][i]>-1e-6 and a[i][i]<1e-6){
            int idx=i+1;
            while(idx<n and a[idx][i]>-1e-6 and a[idx][i]<1e-6){
                ++idx;
            }
            if(idx==n){
                printf("HMMM");
                return 0;
            }
            for(int j=0;j<n;++j){
                swap(a[i][j],a[idx][j]);
                swap(iva[i][j],iva[idx][j]);
            }
        }
        if(a[i][i]!=1){
            double k=a[i][i];
            for(int j=0;j<n;++j){
                a[i][j]/=k;
                iva[i][j]/=k;
            }
        }
        for(int j=0;j<n;++j){
            if(i==j)continue;
            double det=a[j][i];
            for(int k=0;k<n;++k){
                a[j][k]-=a[i][k]*det;
                iva[j][k]-=iva[i][k]*det;
            }
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(iva[i][j]>-1e-6 and iva[i][j]<1e-6)printf("%.6lf ",0);
            else printf("%.6lf ",iva[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            ans[i]+=iva[i][j]*b[j];
        }
        if(ans[i]>-1e-6 and ans[i]<1e-6)printf("X%d = %.6lf\n",i+1,0);
        else printf("X%d = %.6lf\n",i+1,ans[i]);
    }
    return 0;
}
