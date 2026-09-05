#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
const ll mod=998244353;
//考察
//やること
//注意点
//感想
int main(){
    int n,k;
    cin>>n>>k;
    vector<ll>a(n);
    ll cnt=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        cnt+=a[i];
        cnt%=mod;
    }
    cnt*=cnt;
    cnt%=mod;
    vector<ll>fac(n+1,1),finv(n+1,1),inv(n+1,1);
    for(int i=2;i<=n;i++){
        fac[i]=fac[i-1]*i%mod;
        inv[i]=mod-inv[mod%i]*(mod/i)%mod;
        finv[i]=finv[i-1]*inv[i]%mod;
    }
    auto COM=[&](int n,int k)->ll{
        if (n<k)return 0;
        if (n<0||k<0)return 0;
        return fac[n]*(finv[k]*finv[n-k]%mod)%mod;
    };
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=(COM(n-1,k-1)*a[i]%mod)*a[i]%mod;
        cnt-=a[i]*a[i]%mod;
        cnt%=mod;
    }
    ans+=COM(n-2,k-2)*cnt%mod;
    ans%=mod;
    cout<<ans<<endl;
}
