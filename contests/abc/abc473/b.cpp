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
    map<int,int>mp;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        mp[a]++;
    }
    int ans=0;
    for(auto [a,b]:mp){
        if(b%2==1)ans+=a;
    }
    cout<<ans<<endl;
}
