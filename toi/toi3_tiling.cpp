#include<bits/stdc++.h>
using namespace std;
int n;
int cnt;
int tiling[300][300];
void check(int i,int j){
    if(tiling[i][j]==tiling[i+1][j] and tiling[i][j]==tiling[i][j+1]){
        if(tiling[i][j]!=tiling[i][j+2]){
            if(tiling[i][j]!=tiling[i-1][j+1]){
                if(tiling[i][j]!=tiling[i-1][j]){
                    if(tiling[i][j]!=tiling[i][j-1]){
                        if(tiling[i][j]!=tiling[i+1][j-1]){
                            if(tiling[i][j]!=tiling[i+2][j]){
                                if(tiling[i][j]!=tiling[i+1][j+1]){
                                    tiling[i][j]=0;
                                    tiling[i+1][j]=0;
                                    tiling[i][j+1]=0;
                                    ++cnt;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else if(tiling[i][j]==tiling[i+1][j] and tiling[i][j]==tiling[i+1][j-1]){
        if(tiling[i][j]!=tiling[i][j+1]){
            if(tiling[i][j]!=tiling[i+1][j+1]){
                if(tiling[i][j]!=tiling[i+2][j]){
                    if(tiling[i][j]!=tiling[i+2][j-1]){
                        if(tiling[i][j]!=tiling[i+1][j-2]){
                            if(tiling[i][j]!=tiling[i][j-1]){
                                if(tiling[i][j]!=tiling[i-1][j]){
                                    tiling[i][j]=0;
                                    tiling[i+1][j]=0;
                                    tiling[i+1][j-1]=0;
                                    ++cnt;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else if(tiling[i][j]==tiling[i][j+1] and tiling[i][j]==tiling[i+1][j+1]){
        if(tiling[i][j]!=tiling[i][j+2]){
            if(tiling[i][j]!=tiling[i+1][j+2]){
                if(tiling[i][j]!=tiling[i+2][j+1]){
                    if(tiling[i][j]!=tiling[i+1][j]){
                        if(tiling[i][j]!=tiling[i][j-1]){
                            if(tiling[i][j]!=tiling[i-1][j]){
                                if(tiling[i][j]!=tiling[i-1][j+1]){
                                    tiling[i][j]=0;
                                    tiling[i][j+1]=0;
                                    tiling[i+1][j+1]=0;
                                    ++cnt;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else if(tiling[i][j]==tiling[i+1][j] and tiling[i][j]==tiling[i+1][j+1]){
        if(tiling[i][j]!=tiling[i][j+1]){
            if(tiling[i][j]!=tiling[i+1][j+2]){
                if(tiling[i][j]!=tiling[i+2][j+1]){
                    if(tiling[i][j]!=tiling[i+2][j]){
                        if(tiling[i][j]!=tiling[i+1][j-1]){
                            if(tiling[i][j]!=tiling[i][j-1]){
                                if(tiling[i][j]!=tiling[i-1][j]){
                                    tiling[i][j]=0;
                                    tiling[i+1][j]=0;
                                    tiling[i+1][j+1]=0;
                                    ++cnt;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return ;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>tiling[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(tiling[i][j]!=0)check(i,j);
        }
    }
    cout<<cnt;
    return 0;
}