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
    int x;
    cin>>x;
    if(x<40)cout<<40-x<<endl;
    else if(x<70)cout<<70-x<<endl;
    else if(x<90)cout<<90-x<<endl;
    else cout<<"expert"<<endl;
}
