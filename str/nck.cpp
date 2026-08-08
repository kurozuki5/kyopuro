#include <bits/stdc++.h>
using namespace std;
// #include <atcoder/all>
// using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll=long long;
const ll INF=(1LL<<62)-(1LL<<31)-1;
const ll mod=998244353;

int main(){
    int n,k;
    cin>>n>>k;
    vector<ll>fac(n+1),inv(n+1),finv(n+1);//fac i! finv i!の逆元
    fac[0]=fac[1]=1;
    finv[0]=finv[1]=1;
    inv[1]=1;
    for(int i=2;i<=n;i++){
        fac[i]=fac[i-1]*i%mod;
        inv[i]=mod-inv[mod%i]*(mod/i)%mod;
        finv[i]=finv[i-1]*inv[i]%mod;
    }

    auto com=[&](ll n,ll k)->ll{
        if(n<k)return 0;
        if(n<0||k<0)return 0;
        return fac[n]*(finv[k]*finv[n-k]%mod)%mod;
    };
    cout<<com(n,k)<<endl;
    return 0;
}
