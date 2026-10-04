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
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    auto x=a;
    sort(x.begin(),x.end());
    int l=0,r=0;
    for(int i=0;i<n;i++){
        if(x[i]!=a[i]){
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(x[i]!=a[i]){
            r=i;
            break;
        }
    }
    if(r-l+1<=k)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}
