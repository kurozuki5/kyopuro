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
    ll n,d;
    cin>>n>>d;
    vector<ll>x(n),ans;
    for(int i=0;i<n;i++)cin>>x[i];
    for(int i=0;i<n;i++){
        ll m=2e9;
        for(int j=0;j<n;j++){
            if(i==j)continue;
            m=min(m,abs(x[i]-x[j]));
        }
        if(m>=d)ans.push_back(i+1);
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(auto a:ans)cout<<a<<" ";
}
