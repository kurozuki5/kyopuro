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
    ll n;
    cin>>n;
    ll cnt=1;
    for(int k=0;;k++){
        if(cnt>n){
            cout<<k-1<<endl;
            return 0;
        }
        cnt*=2;
    }
}
