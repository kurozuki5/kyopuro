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
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    priority_queue<int>que;
    que.push(a[0]);
    que.push(a[1]);
    for(int i=2;i<n;i++){
        que.push(a[i]);
        vector<int>p;
        for(int j=0;j<2;j++){
            p.push_back(que.top());
            que.pop();
        }
        cout<<que.top()<<endl;
        for(int j=0;j<2;j++){
            que.push(p[j]);
        }
    }
}
