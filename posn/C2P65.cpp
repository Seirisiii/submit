#include<bits/stdc++.h>
using namespace std;
int arr[1<<11][1<<11];
void solve(int i,int j,int I,int J,int n){
    if(n==1)return ;
    int midi=i+n/2;
    int midj=j+n/2;
    if(I<midi and J<midj){
        solve(i,j,I,J,n/2);
        solve(i,midj,midi-1,midj,n/2);
        solve(midi,midj,midi,midj,n/2);
        solve(midi,j,midi,midj-1,n/2);
        arr[midi-1][midj]=4;
        arr[midi][midj]=4;
        arr[midi][midj-1]=4;
    }
    else if(I<midi){
        solve(i,midj,I,J,n/2);
        solve(i,j,midi-1,midj-1,n/2);
        solve(midi,midj,midi,midj,n/2);
        solve(midi,j,midi,midj-1,n/2);
        arr[midi-1][midj-1]=3;
        arr[midi][midj]=3;
        arr[midi][midj-1]=3;
    }
    else if(J<midj){
        solve(midi,j,I,J,n/2);
        solve(i,j,midi-1,midj-1,n/2);
        solve(midi,midj,midi,midj,n/2);
        solve(i,midj,midi-1,midj,n/2);
        arr[midi-1][midj-1]=2;
        arr[midi][midj]=2;
        arr[midi-1][midj]=2;
    }
    else{
        solve(midi,midj,I,J,n/2);
        solve(i,j,midi-1,midj-1,n/2);
        solve(i,midj,midi-1,midj,n/2);
        solve(midi,j,midi,midj-1,n/2);
        arr[midi-1][midj-1]=1;
        arr[midi-1][midj]=1;
        arr[midi][midj-1]=1;
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    char c;
    int I,J;
    cin>>c>>I>>c>>J>>c;
    --I,--J;
    solve(0,0,I,J,1<<n);
    for(int i=0;i<1<<n;++i){
        for(int j=0;j<1<<n;++j){
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
    return 0;
}