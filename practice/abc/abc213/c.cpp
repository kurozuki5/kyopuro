#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i,n) for (int i=0;i<(int)(n);i++)
#define rep1(s,i,n) for (int i=s;i<(int)(n);i++)
using ll=long long;
//考察
//n<=10^5
//x,y独立で考える
//座標圧縮
//やること
//注意点
//感想
int main(){
    int h,w,n;
    cin>>h>>w>>n;
    vector<int>a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i]>>b[i];
    auto ia=a,ib=b;
    sort(ia.begin(),ia.end());
    ia.erase(unique(ia.begin(),ia.end()),ia.end());
    sort(ib.begin(),ib.end());
    ib.erase(unique(ib.begin(),ib.end()),ib.end());
    int ans;
    for(int i=0;i<n;i++){
        cout<<lower_bound(ia.begin(),ia.end(),a[i])-ia.begin()+1<<" "<<lower_bound(ib.begin(),ib.end(),b[i])-ib.begin()+1<<endl;
    }
}
