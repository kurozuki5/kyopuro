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
    int q;
    cin>>q;
    string s,t;
    cin>>s>>t;
    vector<int>c;
    for(int i=0;i<int(s.size()-t.size()+1);i++){
        bool ok=true;
        for(int j=0;j<(int)t.size();j++){
            if(s[i+j]!=t[j])ok=false;
        }
        if(ok)c.push_back(i);
    }
    c.push_back((int)1e7);
    while(q--){
        int l,r;
        cin>>l>>r;
        l--;r--;
        int minL=*lower_bound(c.begin(),c.end(),l);
        if(minL+t.size()<=r+1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
