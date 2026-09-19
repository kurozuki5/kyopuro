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
    int a,b,c;
    cin>>a>>b>>c;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            cout<<i<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
}
