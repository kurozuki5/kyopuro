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
    map<string,int>mp;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        for(int j=0;j<s.size();j++){
            if('A'<=s[j]&&s[j]<='Z')s[j]=tolower(s[j]);
        }
        mp[s]++;
    }
    int ans=-1;
    for(auto[a,b]:mp)ans=max(ans,b);
    cout<<ans<<endl;
}
