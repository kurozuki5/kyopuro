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
    vector<string>s(n),t(n);
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++)cin>>t[i];

    for(int i=0;i<4;i++){
        


        auto tmp=s;
        for(int h=0;h<n;h++){
            for(int w=0;w<n;w++)s[w][n-1-h]=tmp[h][w];
        }
    }
}
