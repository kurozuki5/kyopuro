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
    int a,b;
    cin>>a>>b;
    if(a+b==9||a*b==9||a-b==9||(a%b==0&&a/b==9))cout<<"Nine"<<endl;
    else cout<<"Nein"<<endl;
}
