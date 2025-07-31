#include<bits/stdc++.h>
using namespace std;
struct football{
    string name="";
    int score=0;
    int goal=0;
    int diff=0;
};
football team[4];
int arr[4][4];
bool compare(football a,football b){
    if(a.score!=b.score)return a.score>b.score;
    if(a.diff!=b.diff)return a.diff>b.diff;
    return a.goal>b.goal;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=0;i<4;++i){
        cin>>team[i].name;
    }
    for(int i=0;i<4;++i){
        int sum=0;
        for(int j=0;j<4;++j){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
        team[i].goal=sum;
        team[i].diff=sum;
    }
    for(int j=0;j<4;++j){
        int sum=0;
        for(int i=0;i<4;++i){
            sum+=arr[i][j];
        }
        team[j].diff-=sum;
    }
    for(int i=0;i<4;++i){
        for(int j=i+1;j<4;++j){
            if(arr[i][j]>arr[j][i])team[i].score+=3;
            else if(arr[i][j]<arr[j][i])team[j].score+=3;
            else if(arr[i][j]==arr[j][i]){
                ++team[i].score;
                ++team[j].score;
            }
        }
    }
    sort(team,team+4,compare);
    for(int i=0;i<4;++i){
        cout<<team[i].name<<" "<<team[i].score<<"\n";
    }
    return 0;
}