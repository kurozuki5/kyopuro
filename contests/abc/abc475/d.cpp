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
// 1 以上 N 以下の整数が素数かどうかを返す
vector<bool> ela(int n){
    vector<bool>ans(n+1,true);
    ans[0]=ans[1]=false;
    for(int i=2;i*i<=n;i++){
        if(ans[i]){
            for(int j=2;i*j<=n;j++){
                ans[i*j]=false;
            }
        }
    }
    return ans;
}
int main(){
    string s;
    cin>>s;
    int l=1,r=1,b=10;
    for(int i=0;i<s.size();i++){
        r*=b;
        s[i]-='a';
    }
    l=r/b;
    r--;
    auto ok=ela(r);
    for(int i=l;i<=r;i++){
        if(!ok[i])continue;
        string t;
        for(int j=0;j<t.size();j++){
            t[j]='a'+
        }
    }
    cout<<-1<<endl;
}