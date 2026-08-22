#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
//考察
//やること
//注意点
//感想
int main(){
    int h,w,k;
    cin>>h>>w>>k;
    vector<string>s(h);
    set<int>sh,sw;
    for(int i=0;i<h;i++)sh.insert(i);
    for(int i=0;i<w;i++)sw.insert(i);
    for(int i=0;i<h;i++)cin>>s[i];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j]=='#')sh.erase(i),sw.erase(j);
        }
    }
    vector dist(h,vector<int>(w,-1));
    queue<pair<int,int>>que;
    int ans=0;
    for(auto y:sh)for(auto x:sw){
        ans++;
        que.push({y,x});
        dist[y][x]=0;
    }
    const int dx[4]={0,0,1,-1};
    const int dy[4]={1,-1,0,0};
    while(!que.empty()){
        auto [y,x]=que.front();que.pop();
        for(int i=0;i<4;i++){
            int nh=dx[i]+y,nw=dy[i]+x;
            if(nh<0||nh>=h||nw<0||nw>=w)continue;
            if(s[nh][nw]=='#')continue;
            if(dist[nh][nw]!=-1)continue;
            if(dist[y][x]==k)continue;
            que.push({nh,nw});
            dist[nh][nw]=dist[y][x]+1;
            ans++;
        }
    }
    cout<<ans<<endl;
}
