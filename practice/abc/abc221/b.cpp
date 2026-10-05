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
    string s,t;
    cin>>s>>t;
    for(int i=0;i<s.size()-1;i++)if(s[i]!=t[i]){
        swap(s[i],s[i+1]);
        break;
    }
    for(int i=0;i<s.size();i++)if(s[i]!=t[i]){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
}
