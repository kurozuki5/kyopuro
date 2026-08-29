#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
//考察
//やること
//探索方法はmh距離が一番近い移動方法を選ぶ(愚直)
//
//注意点
//感想

int mh(int x1,int y1,int x2,int y2,int n){
    x1%=n;
    y1%=n;
    return abs(x1-x2)+abs(y1-y2);
}
ll calc_d(vector<pair<int,int>>M,vector<pair<int,int>>p,int n,vector<int>&cnt,vector<vector<int>>g){
    ll d=0;
    int px=0,py=0;
    for(int i=0;i<p.size();i++){
        vector<pair<int,int>>s(3);
        for(int j=0;j<M.size();j++)s[j]=make_pair(mh(px+M[j].first,py+M[j].second,p[i].first,p[i].second,n),j);
        sort(s.begin(),s.end());
        cnt[i]=s[0].second;
        int nx=px,ny=py;
        bool ok=true;
        for(int j=0;j<M.size();j++){
            if(g[(nx+M[j].first)%n][(ny+M[j].second)%n])continue;
            px+=M[s[j].second].first;
            py+=M[s[j].second].second;
            px%=n;
            py%=n;
            g[px][py]=1;
            ok=false;
            break;
        }
        if(ok){
            px+=M[s[0].second].first;
            py+=M[s[0].second].second;
            px%=n;
            py%=n;
            g[px][py]=1;
        }
        d+=floor(s[0].first*sqrt(i+1));
    }
    ll a=(int)1e6+n*n*n,b=d+1;
    return round(a/b);
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>p(n*n);
    for(int i=0;i<n*n;i++)cin>>p[i].first>>p[i].second;
    vector<int>ans(n*n);



    vector<pair<int,int>>M={{83,86},
                            {77,15},
                            {3,35}};
    vector<vector<int>>g(n,vector<int>(n,0));



        vector<int>cnt(n*n,0);
        double score=calc_d(M,p,n,cnt,g);
        ans=cnt;




    for(int i=0;i<m;i++)cout<<M[i].first<<" "<<M[i].second<<endl;
    for(int i=0;i<n*n;i++)cout<<ans[i]<<endl;
    // ofstream outputfile("test.txt");
    // for(int i=0;i<m;i++)outputfile<<M[i].first<<" "<<M[i].second<<endl;
    // for(int i=0;i<n*n;i++)outputfile<<ans[i]<<endl;
    // outputfile.close();
}
