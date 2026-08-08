#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
//考察
//最小のｘ
//x=a*bで表される
//x>=mでa<=n,b<=n
//mのルートをa,bの候補にする？
//そしたらa*bはm以下になる。
//bを増やしてm以上になるとリセットしてaを１増やしてみたいな
//a*b>mとなるような最大のa,bを決めておく
//最小をaにしてbイラン
//やること
//a,b=sqrt(m),a<=n,b<=nで回す
//a*b>=mになったらbreak;する
//注意点
//感想
//１つの値を固定してそこからm以上となるものを探せばよいこの時a<bとするとさらに減る。
int main(){
    ll n,m;
    cin>>n>>m;
    ll ans=1ll<<60;
    for(ll i=1;i<=n;i++){
        ll a=(m+i-1)/i;
        if(a<=n)ans=min(ans,a*i);
        if(i>a)break;
    }
    if(ans==1ll<<60)cout<<-1<<endl;
    else cout<<ans<<endl;
}
