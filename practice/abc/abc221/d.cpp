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
        int a,b;
        cin>>a>>b;
        p.push_back({a,1});
        p.push_back({a+b,-1});
    }
    sort(p.begin(),p.end());
    vector<int>ans(n+1,0);
    int c=0,sub=1;
    for(auto [now,d]:p){
        ans[c]+=now-sub;
        if(d==1)c++;
        else c--;
        sub=now;
    }
    for(int i=0;i<n;i++)cout<<ans[i+1]<<" ";
}
