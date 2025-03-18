#include<bits/stdc++.h>
using namespace std;
const int N=100;
int m,n;
int k;
int score;
char arr[N][N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    cin>>k;
    while(k--){
        int r,c;
		char direct;
		cin>>r>>c>>direct;
        if(arr[r][c]>='A' and arr[r][c]<='Z'){
            if(direct=='L'){
                if(arr[r][c-1]=='-')swap(arr[r][c-1],arr[r][c]);
                else score-=5;
            }
            else if(direct=='R'){
                if(arr[r][c+1]=='-')swap(arr[r][c+1],arr[r][c]);
                else score-=5;
            }
        }
        else score-=5;
        for(int i=m-1;i>=0;--i){
            for(int j=n-1;j>=0;--j){
                if(arr[i][j]>='A' and arr[i][j]<='Z'){
                    while(arr[i+1][j]=='-'){
                        arr[i+1][j]=arr[i][j];
                        arr[i][j]='-';
                        ++i;
                    }
                    if(arr[i][j]>='A' and arr[i][j]<='Z'){
                        bool check=false;
                        if(arr[i][j]==arr[i-1][j]){
                            arr[i-1][j]='-';
                            score+=5;
                            check=true;
                        }
                        if(arr[i][j]==arr[i][j+1]){
                            arr[i][j+1]='-';
                            score+=5;
                            check=true;
                        }
                        if(arr[i][j]==arr[i+1][j]){
                            arr[i+1][j]='-';
                            score+=5;
                            check=true;
                        }
                        if(arr[i][j]==arr[i][j-1]){
                            arr[i][j-1]='-';
                            score+=5;
                            check=true;
                        }
                        if(check){
                            arr[i][j]='-';
                            score+=5;
                        }
                    }
                }
            }
        }
    }
    cout<<score<<"\n";
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
