#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
//考察
//やること
//注意点
//感想
int main(){
    vector<vector<int>>a(4,vector<int>(4));
    for(int i=0;i<4;i++)for(int j=0;j<4;j++)cin>>a[i][j];
    int ans=0;

    for(int i=0;i<1<<16;i++){
        vector<vector<int>>g(4,vector<int>(4,0));
        bool ok=true;
        int m=0;
        for(int j=0;j<16;j++){
            if(i>>j&1){g[j/4][j%4]=1;m++;}
            else if(a[j/4][j%4])ok=false;
        }
        if(!ok)continue;
        int dx[]={1,-1,0,0};
        int dy[]={0,0,1,-1};
        auto f=[&](auto f,int x,int y,auto& g)->void{
            for(int i=0;i<4;i++){
                int nx=x+dx[i],ny=y+dy[i];
                if(nx<0||nx>=4||ny<0||ny>=4)continue;
                if(!g[nx][ny])continue;
                g[nx][ny]=0;
                f(f,nx,ny,g);
            }
        };
        int cnt=0;
        auto p=g;
        for(int i=0;i<16;i++){
            if(p[i/4][i%4]){
                f(f,i/4,i%4,p);
                cnt++;
            }
        }
        p=g;
        vector<vector<int>>g2(6,vector<int>(6,0));
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(g[i][j]==1)g2[i+1][j+1]=1;
            }
        }
        if(cnt!=1)continue;
        int mas=0;
        auto t=[&](auto t,int x,int y,auto& g)->int{
            for(int i=0;i<4;i++){
                int nx=x+dx[i],ny=y+dy[i];
                if(nx<0||nx>=6||ny<0||ny>=6)continue;
                if(g[nx][ny])continue;
                g[nx][ny]=1;
                mas++;
                t(t,nx,ny,g);
            }
            return mas;
        };
        if(36-t(t,0,0,g2)==m)ans++;
    }
    
    cout<<ans<<endl;
}
