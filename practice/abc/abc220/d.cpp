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
const int mod=998244353;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vector<int>dp(10,0);
    dp[a[0]]++;
    for(int i=0;i<n-1;i++){
        vector<int>ndp(10,0);
        for(int j=0;j<10;j++){
            ndp[(j+a[i+1])%10]+=dp[j];
            ndp[(j+a[i+1])%10]%=mod;
            ndp[(j*a[i+1])%10]+=dp[j];
            ndp[(j*a[i+1])%10]%=mod;

        }
        dp=ndp;
    }
    for(auto ans:dp)cout<<ans<<endl;
}
