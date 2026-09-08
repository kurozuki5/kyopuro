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
    int l,q;
    cin>>l>>q;
    set<int>st={0,l};
    while(q--){
        int c,x;
        cin>>c>>x;
        if(c==1){
            st.insert(x);
        }else{
            auto itr=st.lower_bound(x);
            cout<<*itr-*(--itr)<<endl;
        }
    }
}
