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
    int n,k;
    cin>>n>>k;
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        mp[a]++;
    }
    vector<int>cnt(n+1,0);
    for(auto [a,b]:mp)cnt[b]++;
    for(int i=n;i>=0;i--){
        if(cnt[i]!=0){
            cout<<cnt[i]+cnt[i-1]<<endl;
            return 0;
        }
    }
}
