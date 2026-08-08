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
    int n;
    string s;
    cin>>n>>s;
    rep(i,n){
        if(s[i]=='F'&&s[i+1]=='F'||s[i]=='M'&&s[i+1]=='M'){
            cout<<"No"<<endl;
            return 0;
        }
    }
    cout<<"Yes"<<endl;
}
