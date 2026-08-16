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
    ll q,v;
    cin>>q>>v;
    priority_queue<ll>que;
    ll time=0,sub=0;
    while(q--){
        int type;
        cin>>type;
        if(type==1){
            ll t,w;
            cin>>t>>w;
            sub+=t-time;
            time=t;
            que.push(w-sub);
        }else{
            ll t;
            cin>>t;
            sub+=t-time;
            time=t;
            if(que.empty())cout<<-1<<endl;
            else {
                cout<<min(v,que.top()+sub)<<endl;
                que.pop();
            }
        }
    }
}
