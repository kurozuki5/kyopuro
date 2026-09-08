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
    int n;
    cin>>n;
    vector<int>p(n),ip(n);
    for(int i=0;i<n;i++){
        cin>>p[i];
        p[i]--;
        ip[p[i]]=i+1;
    }
    for(auto ans:ip)cout<<ans<<" ";
}
