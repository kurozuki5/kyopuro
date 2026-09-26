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
    ll n,m,k;
    cin>>n>>m>>k;
    ll x,y;
    cin>>x>>y;
    vector<ll>a(n),b(m),sa(n+1,0);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    b.push_back(0);
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++)sa[i+1]=sa[i]+a[i];
    sa.push_back(1ll<<60);
    ll ans=0;
    for(int i=0;i<=m;i++){
        ll d=b[i]/k;
        if(b[i]%k!=0)d++;
        y-=d;
        x+=d*k-b[i];
        if(y<0)break;
        ans=max(ans,i+ll(upper_bound(sa.begin(),sa.end(),x+y*k)-sa.begin()));

    }
    cout<<ans-1<<endl;
}
