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
    map<int,set<int>>xcount;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        xcount[y].insert(x);
    }
    ll ans=0;
    for(auto [y1,x1]:xcount){
        for(auto [y2,x2]:xcount){
            if(y1<y2)continue;
            ll same=0;
            for(auto nx:x2)if(x1.count(nx))same++;
            ans+=same*(same-1)/2;
        }
    }
    cout<<ans<<endl;
}
