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
    int a,b;
    cin>>a>>b;
    int ans=1;
    for(int i=b+1;i<=a;i++)ans*=32;
    cout<<ans<<endl;
}
