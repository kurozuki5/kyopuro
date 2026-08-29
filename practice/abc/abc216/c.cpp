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
    string ans="";
    while(n>0){
        if(n%2==0){
            n/=2;
            ans+='B';
        }else{
            n--;
            ans+='A';
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<ans<<endl;
}
