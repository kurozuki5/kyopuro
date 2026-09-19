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
    vector<ll>a(n);
    ll sz=0,x,b,ans;
    for(int i=0;i<n;i++){cin>>a[i];sz+=a[i];}
    cin>>x;
    b=x/sz*sz;
    ans=x/sz*n;
    for(int i=0;i<n;i++){
        b+=a[i];
        ans++;
        if(b>x){
            cout<<ans<<endl;
            return 0;
        }
    }
}
