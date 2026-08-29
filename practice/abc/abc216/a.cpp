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
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='.'){
            int t=s[i+1]-'0';
            string b=s.substr(0,i);
            cout<<b;
            if(t<=2)cout<<'-'<<endl;
            else if(7<=t)cout<<'+'<<endl;
            return 0;
        }
    }
}
