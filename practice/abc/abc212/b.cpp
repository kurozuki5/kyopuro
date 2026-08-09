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
//やるだけ
int main(){
    string s;
    cin>>s;
    int now=s[0]-'0';
    bool ok=true;
    rep(i,s.size())if(now!=s[i]-'0')ok=false;
    if(ok){
        cout<<"Weak"<<endl;
        return 0;
    }
    ok=true;
    rep(i,s.size()-1){
        now++;
        if(now==10)now=0;
        if(now!=s[i+1]-'0')ok=false;
    }
    if(ok)cout<<"Weak"<<endl;
    else cout<<"Strong"<<endl;
}
