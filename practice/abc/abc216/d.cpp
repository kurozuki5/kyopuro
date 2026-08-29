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
    vector<int>cnt(n,0);
    vector<queue<int>>que(m);
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            int a;
            cin>>a;
            a--;
            que[i].push(a);
        }
        cnt[que[i].front()]++;
    }
    for(int i=0;i<n;i++){
        
    }
}
