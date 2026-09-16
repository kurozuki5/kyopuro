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
    ll n,s,l;
    cin>>n>>s>>l;
    s--;
    vector<ll>a(n-1),as(n,0);
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        as[i+1]=as[i]+a[i];
    }
    int ans=-1;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(s<i||j<s)continue;
            if(as[s]-as[i]+as[j]-as[i]<=l)ans=max(ans,j-i+1);
            if(as[j]-as[s]+as[j]-as[i]<=l)ans=max(ans,j-i+1);
        }
    }
    cout<<ans<<endl;
}
