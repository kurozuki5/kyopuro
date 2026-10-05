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
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    ll ans=0;
    do{
        for(int i=0;i<s.size()-1;i++){
            string a=s.substr(0,i+1),b=s.substr(i+1,s.size()-i-1);
            if(a[0]=='0'||b[0]=='0')continue;
            ans=max(ans,stoll(b)*stoll(a));
        }
    }while(next_permutation(s.begin(),s.end()));
    cout<<ans<<endl;
}
