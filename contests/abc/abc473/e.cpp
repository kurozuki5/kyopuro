#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
//考察
//やること
//二部探スコアxを達成できるかどうか
//注意点
//感想
int main(){
    int n,k;
    cin>>n>>k;
    vector<ll>a(n),s(n+1,0);
    for(int i=0;i<n;i++){
        cin>>a[i];
        s[i+1]=s[i]+a[i];
    }
    ll sum=0,l=0,ans=0;
    for(int i=0;i<n;i++){
        int x=1;
        while(k*x<s[i]-sum){
            if(((*lower_bound(s.begin()+l,s.begin()+i,k*x+s[l])-s[l])%k)==0){
                ans++;
                sum=s[l];
                l=i;
                break;
            }
            x++;
        }
    }
    cout<<ans<<endl;
}
