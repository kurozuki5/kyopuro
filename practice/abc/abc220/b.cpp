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
    int k;
    cin>>k;
    string a,b;
    cin>>a>>b;
    ll m=1,na=0,nb=0;
    for(int i=0;i<a.size();i++){
        na+=m*(a[a.size()-i-1]-'0');
        m*=k;
    }
    m=1;
    for(int i=0;i<b.size();i++){
        nb+=m*(b[b.size()-i-1]-'0');
        m*=k;
    }
    cout<<na*nb<<endl;
}
