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
struct uf
{
    vector<ll>par,siz;
    int group;
    uf(int sz):par(sz),siz(sz,1),group(sz){
        for(int i=0;i<sz;i++)par[i]=i;
    }
    int root(int x){
        if(par[x]=x)return x;
        return par[x]=root(par[x]);
    }
    void unite(int x,int y){
        int rx=root(x),ry=root(y);
        if(rx==ry)return;
        par[rx]=ry;
        siz[ry]+=siz[rx];
        group--;
    }
    bool same(int x,int y){
        int rx=root(rx),ry=root(ry);
        return rx==ry;
    }
    int size(int x){
        return siz[root(x)];
    }
};

int main(){
    
}
