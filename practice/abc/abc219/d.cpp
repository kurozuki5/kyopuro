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
    int n;
    cin>>n;
    int x,y;
    cin>>x>>y;
    vector<vector<int>>dp(x+1,vector<int>(y+1,1e9));
    dp[0][0]=0;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        auto np=dp;
        for(int j=0;j<=x;j++){
            for(int k=0;k<=y;k++){
                if(dp[j][k]==1e9)continue;
                np[min(x,a+j)][min(y,b+k)]=min(dp[j][k]+1,np[min(x,a+j)][min(y,b+k)]);
            }
        }
        dp=np;
    }
    if(dp[x][y]==1e9)cout<<-1<<endl;
    else cout<<dp[x][y]<<endl;
}
