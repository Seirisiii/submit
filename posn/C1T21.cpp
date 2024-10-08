#include<bits/stdc++.h>
using namespace std;
int n;
int m[100];
int box[100][100];
int h[100],w[100];
int mxi,mxj;
int mid[100];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>m[i];
        for(int j=0;j<m[i];++j){
            cin>>box[i][j];
            h[i]+=box[i][j]+2;
            w[i]=max(box[i][j]*2+3,w[i]);
        }
        mid[i]=(mxj+mxj+w[i])/2;
        mxi=max(h[i],mxi);
        mxj+=w[i];
    }
    char arr[mxi+1][mxj+1];
    memset(arr,' ',sizeof(arr));
    for(int i=0;i<n;++i){
        int y=mxi;
        for(int j=0;j<m[i];++j){
            char c='A';
            y-=box[i][j]+2;
            arr[y+1][mid[i]]='^';
            for(int a=mid[i]-box[i][j];a<=mid[i]+box[i][j];++a){
                arr[y][a]='_';
            }
            for(int a=y+1;a<=y+box[i][j]+1;++a){
                arr[a][mid[i]-box[i][j]-1]='|';
                arr[a][mid[i]+box[i][j]+1]='|';
            }
            int l=mid[i]-1;
            int r=mid[i]+1;
            for(int a=y+2;a<=y+box[i][j]+1;++a){
                for(int b=l;b<=r;++b){
                    if(b==l)arr[a][b]='/';
                    if(b==r)arr[a][b]='\\';
                    else if(b>l and b<r){
                        arr[a][b]=c;
                        ++c;
                        if(c>'Z')c='A';
                    }
                }
                --l;
                ++r;
            }
        }
    }
    for(int i=0;i<mxi;++i){
        for(int j=0;j<mxj;++j){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}