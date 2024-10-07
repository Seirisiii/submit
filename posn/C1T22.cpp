#include<bits/stdc++.h>
using namespace std;
int x,y,z,n;
int num;
int mx=-1;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>x>>y>>z>>n;
    do{
        long long sum=0;
        num=mx+1;
        for(int i=0;i<z;++i){
            for(int j=0;j<y;++j){
                for(int k=0;k<x;++k){
                    if(mx<num)mx=num;
                    if(num<n){
                        cout<<num<<" ";
                        sum+=num;
                    }
                    else cout<<"v ";
                    if(k!=x-1){
                        if(i%2==0){
                            if(j%2==0)++num;
                            else --num;
                        }
                        else{
                            if(j%2==0)--num;
                            else ++num;
                        }
                    }
                }
                if(j!=y-1){
                    if(i%2==0)num+=x;
                    else num-=x;
                }
                cout<<"\n";
            }
            if(y%2==0){
                if(i!=z-1){
                    if(i%2==0)num+=x*y+x-1;
                    else num+=x*y-x+1;
                }
                else{
                    if(i%2==0)num+=x-1;
                    else num+=x*y-x;
                }
            }
            else{
                if(i!=z-1){
                    if(i%2==0)num+=x*y;
                    else num+=x*y;
                }
            }
        }
        cout<<sum<<"\n";
        ++num;
    }while(mx<n-1);
    return 0;
}