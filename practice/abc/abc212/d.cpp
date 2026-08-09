#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
//考察
//操作にが無理→xを足すんじゃなくてそれ以降に入れるものからｘの総和を引く
//最後にｘの総和を足す
//やること
//priority_queueで入れて操作にで、cntにためていく。
//その後入れる球はcnt引いたものを入れる操作３でcnt足したものを出力する。
//注意点
//オーバーフロー注意
//感想
int main(){
    int q;
    cin>>q;
    priority_queue<ll,vector<ll>,greater<ll>>pq;
    ll cnt=0;
    while(q--){
        int type,x;
        cin>>type;
        switch (type)
        {
        case 1:
            cin>>x;
            pq.push(x-cnt);
            break;
        case 2:
            cin>>x;
            cnt+=x;
            break;
        case 3:
            cout<<pq.top()+cnt<<endl;
            pq.pop();
            break;
        default:
            break;
        }
    }
}
