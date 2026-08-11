#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
//考察
//queでやるか？

//やること
//注意点
//感想
int main(){
    int n;
    cin>>n;
    vector<vector<int>>g(n);
    for(int i=0;i<n-1;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    for(int i=0;i<n;i++)sort(g[i].begin(),g[i].end());
    auto dfs=[&](auto dfs,int v,int p=-1)->void{
        cout<<v+1<<" ";
        for(int nv:g[v]){
            if(p==nv)continue;
            dfs(dfs,nv,v);
            cout<<v+1<<" ";
        }
        return;
    };
    dfs(dfs,0);
}
