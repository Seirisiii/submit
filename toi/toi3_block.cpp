#include<bits/stdc++.h>
using namespace std;
int m,n;
char arr[5][5];
int l;
int score;
void keep(int i,int j){
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
    return ;
}
void fall(){
    for(int i=m-1;i>=0;--i){
        for(int j=n-1;j>=0;--j){
            if(arr[i][j]>='A' and arr[i][j]<='Z'){
                while(arr[i+1][j]=='-'){
                    arr[i+1][j]=arr[i][j];
                    arr[i][j]='-';
                    ++i;
                }
                keep(i,j);
            }
        }
    }
    return ;
}
void move(int i,int j,char d){
    if(arr[i][j]>='A' and arr[i][j]<='Z'){
        if(d=='L'){
            if(arr[i][j-1]=='-'){
                arr[i][j-1]=arr[i][j];
                arr[i][j]='-';
            }
            else score-=5;
        }
        else if(d=='R'){
            if(arr[i][j+1]=='-'){
                arr[i][j+1]=arr[i][j];
                arr[i][j]='-';
            }
            else score-=5;
        }
    }
    else score-=5;
    fall();
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>m>>n;
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cin>>arr[i][j];
        }
    }
    cin>>l;
    while(l--){
        int I,J;
        char D;
        cin>>I>>J>>D;
        move(I,J,D);
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