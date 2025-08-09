#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct pair{
    int i;
    int j;
};
int m,n;
char arr[1000][1000];
bool visited[1000][1000];
int res;
int front=0,rear=-1;
struct pair q[1000001];
int di[4]={-1,0,1,0};
int dj[4]={0,1,0,-1};
bool empty(){
    if(rear-front>=0)return false;
    return true;
}
void push(int i,int j){
    struct pair val={i,j};
    ++rear;
    q[rear]=val;
    return ;
}
void pop(){
    ++front;
    return ;
}
void bfs(int I,int J){
    front=0,rear=-1;
    push(I,J);
    while(!empty()){
        int i=q[front].i;
        int j=q[front].j;
        pop();
        if(visited[i][j])continue;
        visited[i][j]=true;
        for(int k=0;k<4;++k){
            int ni=i+di[k];
            int nj=j+dj[k];
            if(ni<0 || ni>=m || nj<0 || nj>=n)continue;
            if(visited[ni][nj])continue;
            push(ni,nj);
        }
    }
    return ;
}
int main(){
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            scanf(" %c",&arr[i][j]);
            if(arr[i][j]=='0')visited[i][j]=true;
        }
    }
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j]=='1' && !visited[i][j]){
                ++res;
                bfs(i,j);
            }
        }
    }
    printf("%d",res);
    return 0;
}