#include<bits/stdc++.h>
using namespace std;
int roll[105],box[105][105];
int mxhigh[105];
int bighigh=INT_MIN;
int mxroll[105];
int bigroll;
int mid[105][105];
int high[105][105];
int I[105];
int l[105][105];
int r[105][105];
int c[105][105];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>roll[i];
        for(int j=1;j<=roll[i];++j){
            cin>>box[i][j];
            high[i][j]=box[i][j]+2;
        }
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=roll[i];++j){
            mxhigh[i]+=box[i][j]+2;
            mxroll[i]=mxroll[i]>box[i][j]*2+3?mxroll[i]:box[i][j]*2+3;
        }
        bighigh=bighigh>mxhigh[i]?bighigh:mxhigh[i];
        bigroll+=mxroll[i];
    }
    for(int i=1;i<=n;++i){
        mxroll[i]+=mxroll[i-1];
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=roll[i];++j){
            high[i][j]+=high[i][j-1];
        }
    }
    for(int i=1;i<=n;++i){
        for(int j=1;j<=roll[i];++j){
            mid[i][j]=(mxroll[i]-mxroll[i-1]-(box[i][j]*2+3))/2+2+mxroll[i-1]+box[i][j];
            l[i][j]=mid[i][j];
            r[i][j]=mid[i][j];
        }
    }
    for(int i=1;i<=n;++i){
        I[i]=roll[i];
    }
    for(int i=bighigh;i>0;--i){
        int J=1;
        for(int j=1;j<=bigroll;++j){
            if(j>mxroll[J])++J;
            if(i<=high[J][I[J]]-box[J][I[J]]-2)--I[J];
            if(i>high[J][I[J]])cout<<" ";
            else if(i==high[J][I[J]]){
                if(j>mid[J][I[J]]-box[J][I[J]]-1 and j<mid[J][I[J]]+box[J][I[J]]+1)cout<<"_";
                else cout<<" ";
            }
            else if(i<high[J][I[J]]){
                if(j==mid[J][I[J]]-box[J][I[J]]-1 or j==mid[J][I[J]]+box[J][I[J]]+1)cout<<"|";
                else if(j==r[J][I[J]] and j==l[J][I[J]])cout<<"^";
                else if(j==l[J][I[J]])cout<<"/";
                else if(j==r[J][I[J]])cout<<"\\";
                else if(j>l[J][I[J]] and j<r[J][I[J]]){
                        printf("%c",c[J][I[J]]%26+'A');
                        ++c[J][I[J]];
                }
                else cout<<" ";
            }
            else cout<<" ";
        }
        for(int j=1;j<=n;++j){
            if(i<high[j][I[j]]){
                --l[j][I[j]];
                ++r[j][I[j]];
            }
        }
        cout<<"\n";
    }
    return 0;
}
