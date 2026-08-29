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
    set<pair<string,string>>st;
    for(int i=0;i<n;i++){
        string s,t;
        cin>>s>>t;
        if(st.count({s,t})){
            cout<<"Yes"<<endl;
            return 0;
        }
        st.insert({s,t});
    }
    cout<<"No"<<endl;
}
