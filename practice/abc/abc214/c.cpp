#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
//考察
//やること
//tが答えでs[i]+t[i]がt[i+1]より小さかったら更新する。
//注意点
//更新は2周しないといけない
//感想
int main(){
    int n;
    cin>>n;
    vector<ll>s(n),t(n),ans(n,2e9);
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++)cin>>t[i];
    for(int i=0;i<n;i++){
        ans[(i+1)%n]=min(t[i]+s[i],t[(i+1)%n]);
        t[(i+1)%n]=min(t[(i+1)%n],t[i]+s[i]);
    }
    for(int i=0;i<n;i++){
        ans[(i+1)%n]=min(t[i]+s[i],t[(i+1)%n]);
        t[(i+1)%n]=min(t[(i+1)%n],t[i]+s[i]);
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<endl;
}
