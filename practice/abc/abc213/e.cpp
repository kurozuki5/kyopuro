#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
//考察
//01bfsでできる
//やること
//注意点
//感想
int main(){
    int h,w;
    cin>>h>>w;
    vector<string>s(h);
    rep(i,h)cin>>s[i];
    vector dist(h,vector<int>(w,2e9));
    deque<pair<int,int>>que;
    const int dx[4]={1,-1,0,0};
    const int dy[4]={0,0,1,-1};
    que.push_back({0,0});
    dist[0][0]=0;
    while(!que.empty()){
        auto [x,y]=que.front();que.pop_front();
        for(int i=0;i<4;i++){
            int nh=dx[i]+x,nw=dy[i]+y;
            if(nh<0||nh>=h||nw<0||nw>=w)continue;
            if(s[nh][nw]=='#')continue;
            if(dist[nh][nw]>dist[x][y]){
                que.push_front({nh,nw});
                dist[nh][nw]=dist[x][y];
            }
        }
        for(int i=x-2;i<=x+2;i++){
            for(int j=y-2;j<=y+2;j++){
                if(abs(x-i)+abs(y-j)==4)continue;
                if(i<0||i>=h||j<0||j>=w)continue;
                if(dist[i][j]>dist[x][y]+1){
                    dist[i][j]=dist[x][y]+1;
                    que.push_back({i,j});
                }
            }
        }
    }
    cout<<dist[h-1][w-1]<<endl;
}