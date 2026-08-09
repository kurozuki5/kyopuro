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
//注意点
//感想
int main(){
    int n,m,k;
    cin>>n>>m>>k;
    vector<set<int>>unused(n);
    rep(i,m){
        int u,v;
        cin>>u>>v;
        u--;v--;
        unused[u].insert(v);
        unused[v].insert(u);
    }
    vector<vector<ll>>dp(n,vector<ll>(k+1));
    dp[0][0]=1;
    const ll mod=998244353;
    rep(d,k){

    }
}
