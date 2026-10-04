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
    int n,m;
    cin>>n>>m;
    vector<int>ans(n,0);
    int i=0;
    while(m>0){
        ans[i]++;
        i++;
        m--;
        if(i==n)i=0;
    }
    for(int i=0;i<n;i++)cout<<ans[i]<<endl;
}
