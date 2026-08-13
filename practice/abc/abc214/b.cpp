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
    int s,t,ans=0;
    cin>>s>>t;
    for(int a=0;a<=s;a++){
        for(int b=0;b<=s;b++){
            for(int c=0;c<=s;c++)if(a+b+c<=s&&a*b*c<=t)ans++;
        }
    }
    cout<<ans<<endl;
}
