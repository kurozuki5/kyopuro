#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
//考察
//都市１から都市ｍにk日かけて行くときそこに行くまでの旅の種類の個数が分かると
//隣の都市に行く旅はk+1日でその都市の旅の種類を足す。
//やること
//dp[都市][何日か]=数；
//初期化dp[0][0]=1;
//dp[m][i+1]+=dp[0][i];
//dp[0][k]答え
//O(n^2*m)
//これだとダメで
//全部の頂点のdpの値から隣接いてない頂点の値を引く 
//注意点
//感想
using mint=modint998244353;
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<int>>g(n);
    rep(i,m){
        int u,v;
        cin>>u>>v;
        u--;v--;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    vector<mint>dp(n);
    dp[0]=1;
    rep(d,k){
        vector<mint>p(n);
        swap(p,dp);
        mint tot=0;
        rep(i,n)tot+=p[i];
        rep(i,n){
            dp[i]=tot;
            for(int nv:g[i])dp[i]-=p[nv];
            dp[i]-=p[i];
        }
    }
    cout<<dp[0].val()<<endl;
}
