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
    vector<ll>a(n);
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++)cin>>a[i];
    ll total=0;
    for(int i=0;i<n;i++){
        if(i-m>=0&&ans[i-m]!=-1)total-=a[i-m];
        if(total+a[i]<=k){
            total+=a[i];
            ans[i]=1;
        }
    }
    for(int i=0;i<n;i++){
        if(ans[i]==1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
