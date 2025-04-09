#include<bits/stdc++.h>
using namespace std;
int n;
map<string,int> mon1;
map<int,string> mon2;
vector<tuple<int,int,int,string>> v;
int m;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    mon1["Jan"]=1;
    mon1["Feb"]=2;
    mon1["Mar"]=3;
    mon1["Apr"]=4;
    mon1["May"]=5;
    mon1["Jun"]=6;
    mon1["Jul"]=7;
    mon1["Aug"]=8;
    mon1["Sep"]=9;
    mon1["Oct"]=10;
    mon1["Nov"]=11;
    mon1["Dec"]=12;
    mon2[1]="Jan";
    mon2[2]="Feb";
    mon2[3]="Mar";
    mon2[4]="Apr";
    mon2[5]="May";
    mon2[6]="Jun";
    mon2[7]="Jul";
    mon2[8]="Aug";
    mon2[9]="Sep";
    mon2[10]="Oct";
    mon2[11]="Nov";
    mon2[12]="Dec";
    cin>>n;
    for(int i=0;i<n;++i){
        int d,y;
        string mo,eve;
        cin>>d>>mo>>y>>eve;
        v.emplace_back(d,mon1[mo],y,eve);
    }
    cin>>m;
    while(m--){
        int s;
        int d,y;
        string mo,eve;
        cin>>s>>d>>mo>>y;
        int mon=mon1[mo];
        int l=0,r=n-1;
        vector<tuple<int,int,int,int>> res;
        bool ch=false;
        while(l<=r){
            int mid=(l+r)/2;
            auto [dd,mm,yy,ev]=v[mid];
            res.emplace_back(mid,dd,mm,yy);
            if(dd==d and mm==mon and yy==y){
                eve=ev;
                ch=true;
                break;
            }
            else if(make_tuple(yy,mm,dd)>make_tuple(y,mon,d))
            {
                r=mid-1;
            }
            else l=mid+1;
            // else if(yy<=y){
            //     if(mm<=mon){
            //         if(dd<=d)l=mid+1;
            //         else r=mid;
            //     }
            //     else r=mid;
            // }
            // else r=mid;
            
        }
        if(s==1){
            for(auto [i,dd,mm,yy]:res){
                cout<<"["<<i<<"]: "<<dd<<"/"<<mon2[mm]<<"/"<<yy<<"\n";
            }
        }
        if(ch)cout<<"key: "<<d<<"/"<<mo<<"/"<<y<<" found "<<eve<<"\n";
        else cout<<"key: "<<d<<"/"<<mo<<"/"<<y<<" not found\n";
    }
    return 0;
}
/*
9
11 Jan 1900 Event_A
5 Dec 2001 Event_B
5 Dec 2002 Event_C
21 Aug 2008 Event_D
9 Mar 2013 Event_E
11 Mar 2017 Event_F
7 May 2019 Event_G
29 Feb 2032 Event_H
9 Nov 2042 Event_I
2
1 29 Feb 2032
0 23 Aug 2008
*/