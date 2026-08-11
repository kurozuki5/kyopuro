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
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        p.push_back({a,i+1});
    }
    sort(p.begin(),p.end(),greater<pair<int,int>>());
    cout<<p[1].second<<endl;
}
