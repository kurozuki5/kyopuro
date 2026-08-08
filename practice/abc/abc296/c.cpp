#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
//考察
//やること
//ai-bj=xやからai+x==bjを二分探索すればいいかな
//注意点
//O(nlogn)なので間に合う
//-10^9<=ai,xi<=10^9なのでllを使う
//最初ソートする
//感想
//lower_bound楽だね
//やるだけ
int main(){
    int n;ll x;
    cin>>n>>x;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    sort(a.begin(),a.end());
    rep(i,n){
        if(x+a[i]==a[lower_bound(a.begin(),a.end(),x+a[i])-a.begin()]){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
}
