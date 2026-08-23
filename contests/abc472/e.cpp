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
<<<<<<< HEAD
int main(){
    
=======
void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>g(n);
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        a--;b--;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    vector<int>col(n,-1);
    vector<int>hist;
    auto dfs=[&](auto dfs,int v,int c)->bool{
        if(col[v]!=-1){
            if(col[v]!=c){
                reverse(hist.begin(),hist.end());
                while(hist.back()!=v)hist.pop_back();
                if(hist.size()<=2)return false;
                return true;
            }
            return false;
        }
        col[v]=c;
        hist.push_back(v);
        for(auto nv:g[v]){
            if(dfs(dfs,nv,1-c))return true;
        }
        hist.pop_back();
        return false;
    };
    if(!dfs(dfs,0,0))cout<<-1<<endl;
    else {
        cout<<hist.size()<<endl;
        while(!hist.empty()){
            cout<<hist.back()+1<<" ";
            hist.pop_back();
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)solve();
>>>>>>> 517f8fd (abc472)
}
