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
    vector<int>a(n);
    auto b=a;
    sort(b.begin(),b.end());
    b.erase(unique(b.begin(),b.end(),b.end()));
    //uniqueはaabbbcddaaa ⇒ abcda??????の？の最初のポインタを指すのでそこからbの最後の
    //要素もアで削除するとできる.
    
}
