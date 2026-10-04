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
    int n,q;
    cin>>n>>q;
    vector<int>ans(n+1,0);
    for(int i=0;i<q;i++){
        int l,r,x;
        cin>>l>>r>>x;
        l--,r--,x--;
        ans[l]++;
        ans[r+1]--;
    }
    for(int i=0;i<n;i++)ans[i+1]+=ans[i];
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
}
