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
    vector<vector<int>>ans;
    vector<int>cnt;
    auto dfs=[&](auto dfs,int i,int sum=0)->void{
        if(i==n-1){
            if((k-sum)%(i+1)!=0)return;
            cnt.push_back((k-sum)/(i+1));
            ans.push_back(cnt);
            cnt.pop_back();
            return;
        }
        for(int j=0;j<sum+(i+1)*j<=k;j++){
            if(sum+(i+1)*j>k)return;
            cnt.push_back(j);
            dfs(dfs,i+1,sum+(i+1)*j);
            cnt.pop_back();
        }
        return;
    };
    dfs(dfs,0,0);
    sort(ans.begin(),ans.end());
    for(auto a:ans){
        for(auto b:a)cout<<b<<" ";
        cout<<endl;
    }
}
