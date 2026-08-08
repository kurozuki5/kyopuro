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
//やるだけ
int main(){
    vector<string>s(8);
    rep(i,s.size())cin>>s[i];
    rep(i,s.size()){
        rep(j,s[i].size()){
            if(s[i][j]=='*'){
                cout<<"abcdefgh"[j]<<"87654321"[i]<<endl;
            }
        }
    }
}