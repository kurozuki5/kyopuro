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
    vector<bool>ans(m+1,true);
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        auto f=[&](int a)->vector<int>{
            vector<int>res;
            for(int i=2;i*i<=a;i++){
                while(a%i==0){
                    a/=i;
                    res.push_back(i);
                }
            }
            if(a!=1)res.push_back(a);
            return res;
        };
        vector<int>p=f(a);
        for(auto nv:p){
            if(ans[nv]){
                for(int j=nv;j<=m;j+=nv)ans[j]=false;
            }
        }
    }
    vector<int>res;
    for(int i=1;i<=m;i++)if(ans[i])res.push_back(i);
    cout<<res.size()<<endl;
    for(auto p:res)cout<<p<<endl;
}
