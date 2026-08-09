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
    int a,b;
    cin>>a>>b;
    if(0<a&&b==0)cout<<"Gold"<<endl;
    else if(a==0&&0<b)cout<<"Silver"<<endl;
    else if(0<a&&0<b)cout<<"Alloy"<<endl;
}
