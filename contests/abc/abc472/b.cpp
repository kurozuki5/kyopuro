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
    vector<int>l(n);
    int total=0;
    for(int i=0;i<n;i++){
        cin>>l[i];
        total+=l[i];
    }
    int ans=2e9,cnt=0;
    for(int i=0;i<n-1;i++){
        cnt+=l[i];
        ans=min(ans,abs((total-cnt)-cnt));
    }
    cout<<ans<<endl;
}
