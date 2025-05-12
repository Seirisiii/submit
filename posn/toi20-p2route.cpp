#include<bits/stdc++.h>
using namespace std;

std::vector<std::pair<int,int>> route(int N,std::vector<int> W) {
    std::vector<std::pair<int,int>> result;
    int m=W.size();
    int u=1,v=2;
    int mx=0;
    for(int i=0;i<m-N+2;++i){
        mx=max(mx,v);
        result.emplace_back(u,v);
        ++u;
        if(u==v)u=1,++v,--i;
    }
    for(int i=mx+1;i<=N;++i){
        result.emplace_back(1,i);
    }
    return result;
}

