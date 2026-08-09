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
//lower_bound使い方
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    rep(i,n)cin>>a[i];
    rep(i,m)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=2e9;
    rep(i,n){
        auto id=lower_bound(b.begin(),b.end(),a[i])-b.begin();
        ans=min(ans,abs(a[i]-b[id]));
        if(id!=0)ans=min(ans,abs(a[i]-b[id-1]));
    }
    cout<<ans<<endl;
}
