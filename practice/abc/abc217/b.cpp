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
    set<char>st={'B','R','G','H'};
    for(int i=0;i<3;i++){
        string s;
        cin>>s;
        st.erase(s[1]);
    }
    cout<<'A'<<*st.begin()<<'C'<<endl;
}
