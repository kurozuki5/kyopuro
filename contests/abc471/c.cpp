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
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(),a.end());
    int l=-1,r=n;
    for(int i=0;i<n;i++){
        if(a[i]<0)l=i;
        if(a[i]>0){r=i;break;}
    }
    ll ans=0,now=0;
    for(int i=0;i<n;i++){
        if(l==-1){
            ans+=abs(a[r]-now);
            now=a[r];
            r++;
        }else if(r==n){
            ans+=abs(now-a[l]);
            now=a[l];
            l--;
        }
        else if(abs(now-a[l])<=abs(a[r]-now)){
            ans+=abs(now-a[l]);
            now=a[l];
            l--;
        }else{
            ans+=abs(a[r]-now);
            now=a[r];
            r++;
        }
    }
    cout<<ans<<endl;
}
